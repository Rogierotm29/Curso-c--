#include <iostream>
#include <vector>
using namespace std;

// genera todas las permutaciones de 1..n en orden lexicográfico
vector<vector<int>> permutacionesLex(int n) {
    // 1) permutación base: [1, 2, ..., n]
    vector<int> p(n);
    for (int i = 0; i < n; ++i) p[i] = i + 1;

    vector<vector<int>> L;
    L.push_back(p);

    while (true) {
        // 2) encontrar el mayor i tal que p[i] < p[i+1]
        int i = n - 2;
        while (i >= 0 && p[i] >= p[i + 1]) i--;

        // si no existe tal i, ya estamos en la última permutación
        if (i < 0) break;

        // 3) encontrar el mayor j tal que p[i] < p[j]
        int j = n - 1;
        while (p[i] >= p[j]) j--;

        // 4) intercambiar p[i] y p[j]
        swap(p[i], p[j]);

        // 5) invertir la parte de i+1 hasta el final
        int l = i + 1, r = n - 1;
        while (l < r) {
            swap(p[l], p[r]);
            l++; r--;
        }

        // 6) guardar esta nueva permutación
        L.push_back(p);
    }

    return L;
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    auto perms = permutacionesLex(n);

    for (const auto& v : perms) {
        for (int x : v) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
