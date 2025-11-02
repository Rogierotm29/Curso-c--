#include <iostream>
#include <vector>
using namespace std;

// coins_tabu(C, n, K)
// C: arreglo de monedas (tamaño n)
// n: número de monedas
// K: valor a formar
long long coins_tabu(const vector<int>& C, int n, int K) {
    // T tendrá (n+1) filas y (K+1) columnas
    vector<vector<long long>> T(n + 1, vector<long long>(K + 1, 0));

    // caso base: con 0 monedas solo puedo formar 0 de 1 forma
    T[0][0] = 1;

    // i = 1 .. n
    for (int i = 1; i <= n; ++i) {
        // j = 0 .. K
        for (int j = 0; j <= K; ++j) {

            // 1) formas SIN usar la moneda i-1
            T[i][j] = T[i - 1][j];

            // 2) formas USANDO la moneda i-1 (si alcanza)
            int coin = C[i - 1];
            if (j - coin >= 0) {
                T[i][j] += T[i][j - coin];
            }
        }
    }

    return T[n][K];
}

int main() {
    vector<int> C = {1, 2, 5};
    int K = 5;
    int n = (int)C.size();

    cout << "Formas de hacer " << K << " = " << coins_tabu(C, n, K) << "\n";
    return 0;
}
