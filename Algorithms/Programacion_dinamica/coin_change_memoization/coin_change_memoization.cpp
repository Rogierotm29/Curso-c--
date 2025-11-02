#include <iostream>
#include <vector>
using namespace std;

// C: vector de monedas
// n: cuántas monedas (usamos las primeras n de C)
// K: cantidad a formar
// T: tabla de memo, de tamaño (n+1) x (K+1)
long long coins_memo(const vector<int>& C, int n, int K, vector<vector<long long>>& T) {
    // caso K == 0
    if (K == 0) {
        T[n][K] = 1;
        return 1;
    }

    // caso imposible
    if (n <= 0 || K < 0) {
        return 0;
    }

    // si ya lo calculé
    if (T[n][K] != -1)
        return T[n][K];

    // caso recursivo:
    // 1) usar la moneda C[n-1] (por eso K - C[n-1])
    // 2) no usarla (bajar a n-1)
    T[n][K] = coins_memo(C, n, K - C[n - 1], T)   // tomo la moneda
             + coins_memo(C, n - 1, K, T);        // no la tomo

    return T[n][K];
}

int main() {
    // ejemplo
    vector<int> C = {1, 2, 5};   // monedas
    int K = 5;                   // cantidad a formar
    int n = (int)C.size();

    // tabla (n+1) x (K+1), llena de -1
    vector<vector<long long>> T(n + 1, vector<long long>(K + 1, -1));
    T[0][0] = 1;  // como dice el enunciado

    long long formas = coins_memo(C, n, K, T);

    cout << "Numero de formas de formar " << K << " = " << formas << "\n";
    return 0;
}
