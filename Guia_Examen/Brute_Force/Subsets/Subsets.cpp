#include <iostream>
#include <vector>
#include <algorithm>

//Genera las 2^n combinaciones binarias de longitud n
std::vector<std::vector<int>> powerSetBin(int n){
    //Caso base
    if(n == 1){
        return {{0},{1}};
    }else{
        //caso recursivo
        std::vector<std::vector<int>> L1 = powerSetBin(n - 1);

        //L2 = L1 en reversa
        std::vector<std::vector<int>> L2 = L1;
        reverse(L2.begin(),L2.end());

        //a cada sublista de L1 le agregamos un 0 al inicio
        for(auto &v: L1){
            v.insert(v.begin(),0);
        }

        //a cada sublista de L2le agregamos un 1 al inicio
        for(auto &v: L2){
            v.insert(v.begin(),1);
        }

        //Concatenar L1 y L2
        L1.insert(L1.end(),L2.begin(),L2.end());
        return L1;
    }
}


int main(){
    int n;
    std::cout << "n: ";

    std::cin >> n;
    auto res = powerSetBin(n);

    for(const auto &vec : res){
        for (int x : vec) std::cout << x;
        std::cout << "\n";
    }
    return 0;
}