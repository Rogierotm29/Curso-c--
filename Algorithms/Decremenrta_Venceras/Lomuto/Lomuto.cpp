#include <iostream>
#include <vector>
#include <algorithm> // swap

int lomuto(std::vector<int>& A, int L, int R) {
    int s = L;              // línea 5
    int pivote = A[L];      // línea 6

    for (int i = L + 1; i <= R; ++i) {   // línea 7
        if (A[i] < pivote) {             // línea 8
            s = s + 1;                   // línea 9
            std::swap(A[s], A[i]);       // línea 10
        }
    }

    std::swap(A[s], A[L]);  // línea 13
    return s;               // línea 14
}

int main() {
    std::vector<int> arr {6,1,24,4,5,7,2,8,9};

    int L = 0;
    int R = (int)arr.size() - 1;

    int p = lomuto(arr, L, R);

    std::cout << "Pivote quedó en índice: " << p
              << " con valor: " << arr[p] << "\n";

    std::cout << "Arreglo particionado: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";
}
