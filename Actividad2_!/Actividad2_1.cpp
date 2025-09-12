#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* ------------------------- KMP (LPS + búsqueda) -------------------------
   LPS[i]: longitud del prefijo propio más largo que es también sufijo de
   pat[0..i]. Construcción O(m). Búsqueda O(n).
--------------------------------------------------------------------------*/
vector<int> build_lps(const string& pat){
    int m = (int)pat.size();
    vector<int> lps(m,0);
    for(int i=1, len=0; i<m; ){
        if(pat[i]==pat[len]) lps[i++] = ++len;
        else if(len) len = lps[len-1];
        else lps[i++] = 0;
    }
    return lps;
}
vector<int> kmp_search(const string& text, const string& pat){
    vector<int> ans;
    if(pat.empty()) return ans;
    vector<int> lps = build_lps(pat);
    for(int i=0,j=0; i<(int)text.size(); ){
        if(text[i]==pat[j]){ i++; j++; if(j==(int)pat.size()){ ans.push_back(i-j); j=lps[j-1]; } }
        else if(j) j = lps[j-1];
        else i++;
    }
    return ans;
}

/* Z-Algorithm */
vector<int> z_algorithm(const string& s){
    int n = (int)s.size();
    vector<int> Z(n,0);
    for(int i=1,l=0,r=0;i<n;i++){
        if(i<=r) Z[i]=min(r-i+1, Z[i-l]);
        while(i+Z[i]<n && s[Z[i]]==s[i+Z[i]]) Z[i]++;
        if(i+Z[i]-1>r){ l=i; r=i+Z[i]-1; }
    }
    Z[0]=n;
    return Z;
}

/*Manacher O(n)*/
struct PalRes{ int start; int length; string value; };
PalRes manacher_longest(const string& s){
    if(s.empty()) return {0,0,""};
    string t = "^";
    for(char c: s){ t.push_back('#'); t.push_back(c); }
    t += "#$";
    int n = (int)t.size();
    vector<int> P(n,0);
    int C=0,R=0, bestLen=0, bestCenter=0;
    for(int i=1;i<n-1;i++){
        int mir = 2*C - i;
        if(i<R) P[i] = min(R-i, P[mir]);
        while(t[i+1+P[i]]==t[i-1-P[i]]) P[i]++;
        if(i+P[i]>R){ C=i; R=i+P[i]; }
        if(P[i]>bestLen){ bestLen=P[i]; bestCenter=i; }
    }
    int start = (bestCenter - bestLen)/2; // índice en s
    return {start, bestLen, s.substr(start, bestLen)};
}

/*Suffix Array (Bruta)*/
vector<int> suffix_array_bruteforce(const string& s){
    int n=(int)s.size();
    vector<pair<string,int>> suf;
    suf.reserve(n);
    for(int i=0;i<n;i++) suf.push_back({s.substr(i), i});
    sort(suf.begin(), suf.end(),
         [](const auto& a, const auto& b){ return a.first < b.first; });
    vector<int> sa(n);
    for(int i=0;i<n;i++) sa[i]=suf[i].second;
    return sa;
}

/*Utilidades I/O*/
string read_line_trim(){
    string x; getline(cin, x);
    // quitar \r si viene de Windows
    if(!x.empty() && x.back()=='\r') x.pop_back();
    return x;
}

void menu(){
    cout << "\n=== Menu ===\n"
         << "1) KMP (LPS)  - encontrar todas las ocurrencias\n"
         << "2) Z-Algorithm - calcular arreglo Z de una cadena\n"
         << "3) Manacher - palindromo mas largo\n"
         << "4) Suffix Array (fuerza bruta)\n"
         << "0) Salir\n"
         << "Opcion: ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        menu();
        int op; if(!(cin>>op)) return 0;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(op==0) break;

        if(op==1){
            cout << "Texto: "; string text = read_line_trim();
            cout << "Patron: "; string pat  = read_line_trim();
            auto pos = kmp_search(text, pat);
            cout << "Coincidencias ("<<pos.size()<<") en indices 0-based: ";
            if(pos.empty()) cout << "ninguna\n";
            else{
                for(size_t i=0;i<pos.size();++i){
                    if(i) cout << ", ";
                    cout << pos[i];
                }
                cout << "\n";
            }
        }else if(op==2){
            cout << "Cadena s: "; string s = read_line_trim();
            auto Z = z_algorithm(s);
            cout << "Z-array ("<<Z.size()<<"): ";
            for(size_t i=0;i<Z.size();++i){
                if(i) cout << " ";
                cout << Z[i];
            }
            cout << "\n";
        }else if(op==3){
            cout << "Cadena s: "; string s = read_line_trim();
            auto r = manacher_longest(s);
            cout << "Palindromo mas largo: \"" << r.value << "\"\n";
            cout << "Inicio: " << r.start << ", Longitud: " << r.length << "\n";
        }else if(op==4){
            cout << "Cadena s: "; string s = read_line_trim();
            auto sa = suffix_array_bruteforce(s);
            cout << "Suffix Array (indices 0-based):\n";
            for(int i=0;i<(int)sa.size();++i){
                cout << setw(3) << i << ": " << setw(3) << sa[i]
                     << "  -> \"" << s.substr(sa[i]) << "\"\n";
            }
        }else{
            cout << "Opcion invalida.\n";
        }
    }
    return 0;
}
