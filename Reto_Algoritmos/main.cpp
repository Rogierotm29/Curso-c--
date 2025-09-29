#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <cctype>
#include <array>
#include <unordered_map>
#include <sstream>
#include <limits>
#include <filesystem> 

using namespace std;

// ---------------------------------------------------------------------------
// 1) LECTURA: abro un FASTA y devuelvo una sola cadena con A/C/G/T en mayúsculas
//    (ignoro líneas de encabezado que empiezan con '>').
// ---------------------------------------------------------------------------
string read_fasta_clean(const string& path) {
    ifstream in(path);
    if (!in) throw runtime_error("No pude abrir: " + path);
    string line, seq;
    seq.reserve(300000);
    while (getline(in, line)) {
        if (!line.empty() && line[0] == '>') continue; // salto encabezados
        for (char c : line) {
            char u = (char)toupper((unsigned char)c);
            if (u=='A'||u=='C'||u=='G'||u=='T') seq.push_back(u); // limpio ruido
        }
    }
    return seq;
}

// ---------------------------------------------------------------------------
// 2) BUSQUEDA PROPIA (naive):
//    - match_at: compara si pattern “cala” en text desde índice i.
//    - naive_search_all: recorre text buscando TODAS las ocurrencias.
//    Nota: esto cumple la consigna de “no usar find”.
// ---------------------------------------------------------------------------
inline bool match_at(const string& text, size_t i, const string& pattern) {
    if (i + pattern.size() > text.size()) return false;
    for (size_t k = 0; k < pattern.size(); ++k)
        if (text[i + k] != pattern[k]) return false;
    return true;
}

vector<size_t> naive_search_all(const string& text, const string& pattern){
    vector<size_t> pos;
    if (pattern.empty() || text.empty() || pattern.size() > text.size()) return pos;
    for (size_t i = 0; i + pattern.size() <= text.size(); ++i)
        if (match_at(text, i, pattern)) pos.push_back(i);
    return pos;
}

// ---------------------------------------------------------------------------
// 3) ADN BÁSICO: complemento y complemento inverso
// ---------------------------------------------------------------------------
inline char comp(char b) {
    switch (b) {
        case 'A': return 'T';
        case 'T': return 'A';
        case 'C': return 'G';
        case 'G': return 'C';
        default:  return 'N';
    }
}

string revcomp(const string& s) {
    string rc; rc.resize(s.size());
    for (size_t i = 0, n = s.size(); i < n; ++i)
        rc[n-1-i] = comp(s[i]);
    return rc;
}

// ---------------------------------------------------------------------------
// 4) PALÍNDROMO (inverted repeat):
//    Definición: un tramo que coincide con su complemento inverso.
//    Lo busco expandiendo “centros” de longitud par (porque A<->T y C<->G).
// ---------------------------------------------------------------------------
pair<size_t,size_t> longest_revcomp_palindrome(const string& s) {
    auto eq_comp = [&](char a, char b){ return comp(a) == b; };

    size_t bestL = 0, bestR = 0; // mejor [L..R] inclusive
    if (s.size() < 2) return {0,0};

    // Centros pares: (i, i+1)
    for (size_t i = 0; i + 1 < s.size(); ++i) {
        long long L = (long long)i, R = (long long)i + 1;
        while (L >= 0 && (size_t)R < s.size() && eq_comp(s[(size_t)L], s[(size_t)R])) {
            if ((size_t)(R - L) > (bestR - bestL)) { bestL = (size_t)L; bestR = (size_t)R; }
            --L; ++R;
        }
    }
    // Centros impares no aplican para complemento-inverso (ninguna base se complementa consigo misma)
    return {bestL, bestR};
}

// ---------------------------------------------------------------------------
// 5) TRADUCCION DNA -> AA (código genético estándar).
//    translate_frame: corre un marco 0/1/2 y genera aminoácidos.
//    También armo funciones para traducir los 3 marcos forward y los 3 reverse.
// ---------------------------------------------------------------------------
static const unordered_map<string,char> GENETIC_CODE = {
    {"TTT",'F'},{"TTC",'F'},{"TTA",'L'},{"TTG",'L'},
    {"TCT",'S'},{"TCC",'S'},{"TCA",'S'},{"TCG",'S'},
    {"TAT",'Y'},{"TAC",'Y'},{"TAA",'*'},{"TAG",'*'},
    {"TGT",'C'},{"TGC",'C'},{"TGA",'*'},{"TGG",'W'},
    {"CTT",'L'},{"CTC",'L'},{"CTA",'L'},{"CTG",'L'},
    {"CCT",'P'},{"CCC",'P'},{"CCA",'P'},{"CCG",'P'},
    {"CAT",'H'},{"CAC",'H'},{"CAA",'Q'},{"CAG",'Q'},
    {"CGT",'R'},{"CGC",'R'},{"CGA",'R'},{"CGG",'R'},
    {"ATT",'I'},{"ATC",'I'},{"ATA",'I'},{"ATG",'M'},
    {"ACT",'T'},{"ACC",'T'},{"ACA",'T'},{"ACG",'T'},
    {"AAT",'N'},{"AAC",'N'},{"AAA",'K'},{"AAG",'K'},
    {"AGT",'S'},{"AGC",'S'},{"AGA",'R'},{"AGG",'R'},
    {"GTT",'V'},{"GTC",'V'},{"GTA",'V'},{"GTG",'V'},
    {"GCT",'A'},{"GCC",'A'},{"GCA",'A'},{"GCG",'A'},
    {"GAT",'D'},{"GAC",'D'},{"GAA",'E'},{"GAG",'E'},
    {"GGT",'G'},{"GGC",'G'},{"GGA",'G'},{"GGG",'G'}
};

string translate_frame(const string& dna, size_t frame, bool until_stop=false) {
    string aa;
    if (frame > 2 || dna.size() < frame + 3) return aa;
    aa.reserve(dna.size() / 3);

    for (size_t i = frame; i + 2 < dna.size(); i += 3) {
        string codon;
        codon.push_back(dna[i]); codon.push_back(dna[i+1]); codon.push_back(dna[i+2]);
        auto it = GENETIC_CODE.find(codon);
        char c = (it == GENETIC_CODE.end()) ? 'X' : it->second; // X = algo raro
        if (until_stop && c == '*') break;
        aa.push_back(c);
    }
    return aa;
}

array<string,3> translate_3_frames_forward(const string& dna) {
    return array<string,3>{
        translate_frame(dna,0,false),
        translate_frame(dna,1,false),
        translate_frame(dna,2,false)
    };
}

array<string,3> translate_3_frames_reverse(const string& dna) {
    string rc = revcomp(dna);
    return array<string,3>{
        translate_frame(rc,0,false),
        translate_frame(rc,1,false),
        translate_frame(rc,2,false)
    };
}

// ---------------------------------------------------------------------------
// 6) BUSCAR UNA PROTEÍNA (AA) EN EL GENOMA traduciendo los 6 marcos.
//    Reporto en qué marco cayó y las posiciones en nucleótidos (0-based).
// ---------------------------------------------------------------------------
struct HitAA {
    bool reverse;     // false=fwd, true=rev
    int frame;        // 0,1,2
    size_t aa_pos;    // dónde empezó en la cadena AA
    size_t nt_start;  // rango en nucleótidos en el genoma original
    size_t nt_end;    // inclusive
};

vector<HitAA> find_protein_in_genome(const string& genome, const string& aa_pattern) {
    vector<HitAA> hits;
    if (aa_pattern.empty()) return hits;

    // Forward (fácil)
    auto fwd = translate_3_frames_forward(genome);
    for (int f = 0; f < 3; ++f) {
        auto occ = naive_search_all(fwd[(size_t)f], aa_pattern);
        for (size_t p : occ) {
            size_t nt_start = p*3 + (size_t)f;
            size_t nt_end   = nt_start + aa_pattern.size()*3 - 1;
            if (nt_end < genome.size()) hits.push_back({false, f, p, nt_start, nt_end});
        }
    }

    // Reverse: traduzco el complemento inverso, pero debo mapear a índices del original
    string rc = revcomp(genome);
    auto rev = translate_3_frames_reverse(genome); // ya usa rc
    for (int f = 0; f < 3; ++f) {
        auto occ = naive_search_all(rev[(size_t)f], aa_pattern);
        for (size_t p : occ) {
            size_t start_nt_rc = p*3 + (size_t)f;
            size_t end_nt_rc   = start_nt_rc + aa_pattern.size()*3 - 1;
            if (end_nt_rc >= rc.size()) continue;
            size_t N = genome.size();
            // Mapeo: índice i en rc → (N-1-i) en original
            size_t orig_start = N - 1 - end_nt_rc;
            size_t orig_end   = N - 1 - start_nt_rc;
            hits.push_back({true, f, p, orig_start, orig_end});
        }
    }

    sort(hits.begin(), hits.end(), [](const HitAA& a, const HitAA& b){
        return a.nt_start < b.nt_start;
    });
    return hits;
}

// ---------------------------------------------------------------------------
// 7) ESTRUCTURAS PARA GUARDAR TODO LO QUE VOY CARGANDO
// ---------------------------------------------------------------------------
struct Data {
    string genome_wuhan;
    string genome_texas;
    string gene_M;
    string gene_ORF1ab;
    string gene_S;
} DB;

struct ProteinItem {
    string name;   // p.ej. “Spike_S1”
    string aa;     // secuencia AA
};
vector<ProteinItem> PROT_DB;

// helpers chiquitos para limpiar texto de seq-proteins.txt
static inline string trim(const string& s){
    size_t a = s.find_first_not_of(" \t\r\n");
    size_t b = s.find_last_not_of(" \t\r\n");
    if (a==string::npos) return "";
    return s.substr(a, b-a+1);
}
static inline string only_AA(const string& s){
    string t; t.reserve(s.size());
    for(char c: s){
        char u = (char)toupper((unsigned char)c);
        if ((u>='A' && u<='Z') || u=='*') t.push_back(u);
    }
    return t;
}

// Carga flexible: acepta líneas tipo "name=SEQ", "name: SEQ" o "name   SEQ"
void load_proteins(const string& path){
    PROT_DB.clear();
    ifstream in(path);
    if(!in){ cerr << "Aviso: no pude abrir " << path << " (si no está, no pasa nada)\n"; return; }
    string line;
    while(getline(in,line)){
        string s = trim(line);
        if (s.empty() || s[0]=='#') continue;

        string name, seq;
        size_t p = s.find('=');
        if (p!=string::npos){
            name = trim(s.substr(0,p));
            seq  = trim(s.substr(p+1));
        }else if ((p = s.find(':'))!=string::npos){
            name = trim(s.substr(0,p));
            seq  = trim(s.substr(p+1));
        }else{
            istringstream iss(s);
            iss >> name;
            string rest; std::getline(iss, rest);
            seq = trim(rest);
        }
        if(name.empty() || seq.empty()) continue;
        seq = only_AA(seq);
        if(seq.empty()) continue;
        PROT_DB.push_back({name, seq});
    }
}

// Cargo TODO al inicio (si un archivo falta, truena con mensaje entendible)
void load_all() {
    const string BASE = "C:\\Users\\rogie\\OneDrive\\Escritorio\\C++\\Curso-c--\\Reto_Algoritmos\\";


    cout << "CWD: " << std::filesystem::current_path().string() << "\n";

    DB.genome_wuhan = read_fasta_clean(BASE + "SARS-COV-2-MN908947.3.txt");
    DB.genome_texas = read_fasta_clean(BASE + "SARS-COV-2-MT106054.1.txt");
    DB.gene_M       = read_fasta_clean(BASE + "gen-M.txt");
    DB.gene_ORF1ab  = read_fasta_clean(BASE + "gen-ORF1AB.txt");
    DB.gene_S       = read_fasta_clean(BASE + "gen-S.txt");
    load_proteins(BASE + "seq-proteins.txt");
}
// ---------------------------------------------------------------------------
// 8) MENÚS: cada opción hace algo puntual y me imprime resultados claros
// ---------------------------------------------------------------------------
void menu_find_gene() {
    cout << "\n[1] Buscar gen en el genoma (búsqueda naive escrita por mí)\n";
    cout << "   Gen: 1) M  2) ORF1ab  3) S  -> ";
    int op; cin >> op;
    const string* gene = nullptr;
    string gname;
    if (op == 1) { gene = &DB.gene_M; gname = "M"; }
    else if (op == 2) { gene = &DB.gene_ORF1ab; gname = "ORF1ab"; }
    else if (op == 3) { gene = &DB.gene_S; gname = "S"; }
    else { cout << "   Opcion invalida.\n"; return; }

    cout << "   Genoma: 1) Wuhan 2019  2) Texas 2020  -> ";
    int gg; cin >> gg;
    const string* genome = (gg==2)? &DB.genome_texas : &DB.genome_wuhan;
    string glabel = (gg==2)? "Texas 2020" : "Wuhan 2019";

    auto occ = naive_search_all(*genome, *gene);
    if (occ.empty()) {
        cout << "   No se encontro el gen " << gname << " en " << glabel << ".\n";
    } else {
        cout << "   Ocurrencias del gen " << gname << " en " << glabel << " (indices 0-based):\n";
        for (size_t i = 0; i < occ.size(); ++i) {
            cout << "   - inicio: " << occ[i]
                 << "  fin: " << (occ[i] + gene->size() - 1) << "\n";
        }
    }
}

void menu_longest_palindrome() {
    cout << "\n[2] Palindromo (complemento inverso) mas largo dentro de un gen\n";
    cout << "   Gen: 1) M  2) ORF1ab  3) S  -> ";
    int op; cin >> op;
    const string* gene = nullptr;
    string gname;
    if (op == 1) { gene = &DB.gene_M; gname = "M"; }
    else if (op == 2) { gene = &DB.gene_ORF1ab; gname = "ORF1ab"; }
    else if (op == 3) { gene = &DB.gene_S; gname = "S"; }
    else { cout << "   Opcion invalida.\n"; return; }

    auto LR = longest_revcomp_palindrome(*gene);
    size_t L = LR.first, R = LR.second;
    if (R <= L) { cout << "   No se detecto palindromo rev-comp no trivial.\n"; return; }

    cout << "   Gen " << gname << " → mejor palindromo (rev-comp) :\n";
    cout << "   L=" << L << "  R=" << R << "  (longitud=" << (R - L + 1) << ")\n";
    string pal = gene->substr(L, R - L + 1);
    for (size_t i = 0; i < pal.size(); i += 60)
        cout << "   " << pal.substr(i, min<size_t>(60, pal.size()-i)) << "\n";
}

void menu_translate_gene() {
    cout << "\n[3] Traducir un gen a proteina (6 marcos)\n";
    cout << "   Gen: 1) M  2) ORF1ab  3) S  -> ";
    int op; cin >> op;
    const string* gene = nullptr;
    string gname;
    if (op == 1) { gene = &DB.gene_M; gname = "M"; }
    else if (op == 2) { gene = &DB.gene_ORF1ab; gname = "ORF1ab"; }
    else if (op == 3) { gene = &DB.gene_S; gname = "S"; }
    else { cout << "   Opcion invalida.\n"; return; }

    auto fwd = translate_3_frames_forward(*gene);
    auto rev = translate_3_frames_reverse(*gene);

    auto printAA = [&](const string& label, const string& aa) {
        cout << "   " << label << " | len=" << aa.size() << "\n";
        for (size_t i = 0; i < aa.size(); i += 60)
            cout << "   " << aa.substr(i, min<size_t>(60, aa.size()-i)) << "\n";
    };

    cout << "   Proteinas candidatas por marco:\n";
    printAA("FW frame 0", fwd[0]);
    printAA("FW frame 1", fwd[1]);
    printAA("FW frame 2", fwd[2]);
    printAA("RV frame 0", rev[0]);
    printAA("RV frame 1", rev[1]);
    printAA("RV frame 2", rev[2]);

    cout << "   Tip: el marco “real” suele tener ATG (start) al inicio y ORFs sin muchos '*'.\n";
}

void menu_find_protein_in_genome() {
    cout << "\n[4] Buscar una proteina (AA) en el GENOMA (6 marcos)\n";
    cout << "   Escribe la secuencia de AA (usa letras estandar, '*' si quieres):\n";
    string aa; 
    cin >> aa;
    for (char& c : aa) c = (char)toupper((unsigned char)c);

    cout << "   Genoma: 1) Wuhan 2019  2) Texas 2020  -> ";
    int gg; cin >> gg;
    const string* genome = (gg==2)? &DB.genome_texas : &DB.genome_wuhan;
    string glabel = (gg==2)? "Texas 2020" : "Wuhan 2019";

    auto hits = find_protein_in_genome(*genome, aa);
    if (hits.empty()) { cout << "   No se encontro la proteina en " << glabel << ".\n"; return; }

    cout << "   Ocurrencias en " << glabel << ":\n";
    for (const auto& h : hits) {
        cout << "   - " << (h.reverse ? "REV" : "FWD") 
             << " frame " << h.frame 
             << " | nt[" << h.nt_start << "," << h.nt_end << "]"
             << " | aa_pos=" << h.aa_pos << "\n";
    }
}

struct SNP { size_t pos; char a; char b; };
void menu_compare_genomes_snps(){
    cout << "\n[6] Comparar Wuhan 2019 vs Texas 2020 (SNPs base a base)\n";
    if (DB.genome_wuhan.size() != DB.genome_texas.size()){
        cout << "   Ojo: longitudes distintas (Wuhan=" << DB.genome_wuhan.size()
             << ", Texas=" << DB.genome_texas.size() << ").\n"
             << "   Para indels hay que alinear; lo dejo para una versión 2.\n";
        return;
    }
    vector<SNP> snps;
    for (size_t i=0;i<DB.genome_wuhan.size();++i){
        char a = DB.genome_wuhan[i], b = DB.genome_texas[i];
        if (a!=b) snps.push_back({i,a,b});
    }
    cout << "   SNPs encontrados: " << snps.size() << "\n";
    size_t show = min<size_t>(50, snps.size());
    if (show>0){
        cout << "   Primeros " << show << ":\n";
        for (size_t k=0;k<show;++k)
            cout << "   pos " << snps[k].pos << " : " << snps[k].a << " -> " << snps[k].b << "\n";
    }
}

void menu_find_protein_by_name(){
    if (PROT_DB.empty()){
        cout << "\n[5] Buscar proteina por nombre\n";
        cout << "   No cargue seq-proteins.txt, así que esta opción no tiene data.\n";
        return;
    }
    cout << "\n[5] Buscar proteina por nombre en el genoma (6 marcos)\n";
    cout << "   Hay " << PROT_DB.size() << " registros. Mostrar primeros 20? (y/n): ";
    char show; cin >> show;
    if (show=='y' || show=='Y'){
        size_t lim = min<size_t>(20, PROT_DB.size());
        for(size_t i=0;i<lim;++i)
            cout << "   [" << i << "] " << PROT_DB[i].name 
                 << "  (lenAA=" << PROT_DB[i].aa.size() << ")\n";
    }
    cout << "   Escribe nombre EXACTO o un indice: ";
    string token; cin >> token;

    string aa; string chosen;
    bool numeric = !token.empty() && all_of(token.begin(), token.end(),
        [](char c){ return isdigit((unsigned char)c)!=0; });
    if (numeric){
        size_t idx = (size_t)stoull(token);
        if (idx >= PROT_DB.size()){ cout << "   Indice fuera de rango.\n"; return; }
        aa = PROT_DB[idx].aa; chosen = PROT_DB[idx].name;
    }else{
        bool ok=false;
        for (auto& it: PROT_DB){
            if (it.name == token){ aa = it.aa; chosen = it.name; ok=true; break; }
        }
        if (!ok){ cout << "   Nombre no encontrado.\n"; return; }
    }

    cout << "   Genoma: 1) Wuhan 2019  2) Texas 2020  -> ";
    int gg; cin >> gg;
    const string* genome = (gg==2)? &DB.genome_texas : &DB.genome_wuhan;
    string glabel = (gg==2)? "Texas 2020" : "Wuhan 2019";

    auto hits = find_protein_in_genome(*genome, aa);
    if (hits.empty()){
        cout << "   (" << chosen << ") no se encontro en " << glabel << ".\n";
        return;
    }
    cout << "   (" << chosen << ") hallada en " << glabel << ": " << hits.size() << " ocurrencias\n";
    for (const auto& h : hits) {
        cout << "   - " << (h.reverse ? "REV" : "FWD") 
             << " frame " << h.frame 
             << " | nt[" << h.nt_start << "," << h.nt_end << "]"
             << " | aa_pos=" << h.aa_pos << "\n";
    }
}

// ---------------------------------------------------------------------------
// 9) MAIN: cargo archivos, muestro resumen y saco el menú principal
// ---------------------------------------------------------------------------
int main() {
    ios::sync_with_stdio(false);
    cin.tie(&cout);

    try {
        cout << "Cargando genomas/genes y (si existe) seq-proteins.txt..." << std::endl; // flush
        load_all();
        cout << "Listo." << std::endl; // flush
        cout << "Genomas: Wuhan=" << DB.genome_wuhan.size()
            << " | Texas=" << DB.genome_texas.size() << " bases" << std::endl;
        cout << "Genes: M=" << DB.gene_M.size()
            << " | ORF1ab=" << DB.gene_ORF1ab.size()
            << " | S=" << DB.gene_S.size() << std::endl;
        cout << "Proteinas cargadas (por nombre): " << PROT_DB.size() << std::endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    while (true) {
        cout << "\n================= MENU =================\n";
        cout << "1) Buscar un gen en el genoma\n";
        cout << "2) Palindromo (rev-comp) mas largo en un gen\n";
        cout << "3) Traducir un gen a proteina (6 marcos)\n";
        cout << "4) Buscar una proteina (AA) en el genoma (6 marcos)\n";
        cout << "5) Buscar una proteina por NOMBRE (seq-proteins.txt)\n";
        cout << "6) Comparar Wuhan vs Texas (SNPs base a base)\n";
        cout << "0) Salir\n";
        cout << "Elige opcion: " << flush;

        int op;
        if (!(cin >> op)) {
            // si pusiste texto (ej. "hola"), limpiamos el error y pedimos de nuevo
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "   Entrada invalida. Escribe un numero entre 0 y 6." << endl;
            continue;
        }

        switch (op) {
            case 0: return 0;
            case 1: menu_find_gene(); break;
            case 2: menu_longest_palindrome(); break;
            case 3: menu_translate_gene(); break;
            case 4: menu_find_protein_in_genome(); break;
            case 5: menu_find_protein_by_name(); break;
            case 6: menu_compare_genomes_snps(); break;
            default:
                cout << "   Opcion invalida. Intenta de nuevo." << endl;
                break;
        }
    }

    return 0;
}
