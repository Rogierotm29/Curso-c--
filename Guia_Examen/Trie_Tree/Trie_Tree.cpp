// C++ Program to implement trie
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// class for a node of the trie
class TrieNode {
public:
    bool endofWord;
    TrieNode* children[26];
    TrieNode() : endofWord(false) {
        for(int i{0}; i < 26; i++) children[i] = nullptr;
    }
};

// class for the Trie implementation
class Trie {
private:
    TrieNode* root;

    void collect(TrieNode* node, string& pref, vector<string>& out) const {
        if(!node) return;
        if(node -> endofWord) out.push_back(pref);
        for(int i{0}; i < 26; ++i){
            if(node->children[i]){
                pref.push_back(char('a' + i));
                collect(node->children[i], pref, out);
                pref.pop_back();
            }
        }
    }

public:
    Trie() { root = new TrieNode(); }

    // Function to insert a word into the trie
    void insert(string word)
    {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->endofWord = true;
    }

    // Function to search a word in the trie
    bool search(const string& word) const
    {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (index < 0 || index >= 26 || !node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return node->endofWord;
    }

    // Function to check if there is any word in the trie
    // that starts with the given prefix
    bool startsWith(string prefix)
    {
        TrieNode* node = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return true;
    }

    // Function to delete a word from the trie
    void deleteWord(string word)
    {
        TrieNode* node = root;
        for (char c : word) {
            int index = c - 'a';
            if (!node->children[index]) {
                return;
            }
            node = node->children[index];
        }
        if (node->endofWord == true) {
            node->endofWord = false;
        }
    }

    // Function to print the trie
    void print(TrieNode* node, string prefix) const
    {
        if (node->endofWord) {
            cout << prefix << endl;
        }
        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                print(node->children[i],
                      prefix + char('a' + i));
            }
        }
    }

    // Function to start printing from the root
    void print() const { print(root, ""); }

    vector<string> autocomplete(const string& prefix) const {
        TrieNode* node = root;
        for (char c : prefix){
            int index = c - 'a';
            if(index < 0 || index >= 26 || !node->children[index]){
                return {};
            }
            node = node->children[index];
        }
        vector<string> out;
        string pref = prefix;
        collect(node, pref, out);
        //Take out the prefix if the word was already complete
        out.erase(remove(out.begin(), out.end(), prefix), out.end());
        return out;
    }
};



class SuffixNode {
public:
    SuffixNode* ch[26];
    vector<int> occ; // Index of the start of the sufixes that pass true the node
    SuffixNode() {
        for (int i = 0; i < 26; ++i) ch[i] = nullptr;
    }
};

class SuffixTrie {
private:
    SuffixNode* root;
    string text;

    void insertSuffix(int start) {
        SuffixNode* node = root;
        for (int j = start; j < (int)text.size(); ++j) {
            char c = text[j];
            int idx = c - 'a';
            if (idx < 0 || idx >= 26) continue; // only a - z
            if (!node->ch[idx]) node->ch[idx] = new SuffixNode();
            node = node->ch[idx];
            node->occ.push_back(start);
        }
    }

public:
    explicit SuffixTrie(const string& s) : text(s) {
        root = new SuffixNode();
        for (int i = 0; i < (int)text.size(); ++i) insertSuffix(i);
    }

    //Returns the indexs of start where pat appears
    vector<int> find(const string& pat) const {
        const SuffixNode* node = root;
        for (char c : pat) {
            int idx = c - 'a';
            if (idx < 0 || idx >= 26 || !node->ch[idx]) return {};
            node = node->ch[idx];
        }
        return node->occ; 
    }
};
int main()
{
    // Create a Trie
    Trie trie;

    vector<string> palabras = {"casi", "casa", "camisa", "camara", "camion", "ave", "alce"};
    for(auto& w : palabras) trie.insert(w);


    //Requested words
    vector<string> consultas = {"cam", "casa", "car", "al"};
    for(auto& q : consultas){
        if(trie.search(q)){
            cout << "La cadena " << q << " existe completa" << endl;
        }else{
            auto sug = trie.autocomplete(q);
            if(!sug.empty()){
                cout << "Sugerencias para " << q << ":" << endl;
                for(auto& s : sug) cout << s << endl;
            }else{
                cout << "No hay coincidencias para " << q << endl;
            }
        }
        cout << "--------" << endl;
    }

    //Suffix trie with anabanana
    string texto = "anabanana";
    SuffixTrie st(texto);


    vector<string> patrones = {"ana", "ban", "nana", "aba"};
    for (auto& p : patrones) {
        auto pos = st.find(p);
        if (pos.empty()) {
            cout << "No se encontro '" << p << "' en " << texto << endl;
        } else {
            cout << "Ocurrencias de '" << p << "' en " << texto << " (indices 0-based inicio,fin):" << endl;
            for (int start : pos) {
                cout << p << " -> [" << start << "," << (start + (int)p.size() - 1) << "]" << endl;
            }
        }
        cout << "----" << endl;
    }

    return 0;
}