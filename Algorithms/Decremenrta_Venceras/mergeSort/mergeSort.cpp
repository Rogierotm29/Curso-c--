#include <iostream>
#include <vector>

//funciona A[l..m] y A[m+1...r] ya ordenados

void merge(std::vector<int>& A, int l, int m, int r){
    //copias
    std::vector<int> B(A.begin() + l, A.begin() + m + 1); //Izquierda
    std::vector<int> C(A.begin() + m + 1,A.begin() + r + 1); //derecha

    int s1 = (int)B.size();
    int s2 = (int)C.size();

    int i = 0, j = 0; //indices en B y C
    int k = l;

    //fusionar mientras haya mambos
    while(i < s1 && j < s2){
        if(B[i] < C[j]){
            A[k] = B[i];
            i++;
        }else{
            A[k] = C[j];
            j++;
        }
        k++;
    }

    //copiar lo que sobre de la izquierda
    while ( i < s1){
        A[k] = B[i];
        i++; k++;
    }

    //copair lo que sobre de la derecha
    while(k < s2){
        A[k] = C[j];
        j++; k++;
    }
}

// merge sort
void mergeSort(std::vector<int>& A, int l, int r){
    if (l < r){
        int m = l + (r - l) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);
        merge(A, l, m, r);
    }
}

int main(){
    std::vector<int> A {6,1,24,4,5,7,2,8,9};

    mergeSort(A,0, (int)A.size() - 1);

    for(int x : A){
        std::cout << x << " ";
    }
    std::cout << "\n";
    return 0;
}