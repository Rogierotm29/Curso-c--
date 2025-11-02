#include <iostream>
#include <vector>
#include <algorithm> 


//Partition(A, L, R)
int partition(std::vector<int>& A, int L, int R){
    int pivot = A[R]; 
    int i = L - 1; 

    for(int j = L; j <= R - 1; ++j){
        if(A[j] < pivot){
            i += 1;
            std::swap(A[i],A[j]);
        }
    }
    std::swap(A[i + 1], A[R]);
    return i + 1;
}

//QuickSort(A, l, r)
void quickSort(std::vector<int>& A, int L, int R){
    if(L < R){
        int p_index = partition(A,L,R);
        quickSort(A, L, p_index - 1);
        quickSort(A, p_index + 1, R);
    }
}


int main(){
    std::vector<int> A{6, 1, 24, 4, 5, 7, 2, 8, 9};

    quickSort(A,0,(int)A.size() - 1);

    for(int x : A){
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}