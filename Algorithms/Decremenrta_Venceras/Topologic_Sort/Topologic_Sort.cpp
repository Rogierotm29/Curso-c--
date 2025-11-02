#include <iostream>
#include <vector>
#include <queue>

// G esta como lista de adyacencia: G[u] tiene a todos los v  dodne hay u -> v
std::vector<int> topoSort(const std::vector<std::vector<int>>& G){
    int n = G.size();

    std::vector<int> indeg(n,0);

    //1)Calcular grados de entrada
    for(int u = 0; u < n; ++u){
        for(int v : G[u]){
            indeg[v]++;
        }
    }


    //2) metera la cola los que no tienen aristas de entrada
    std::queue<int> q;
    for(int i{0}; i < n; ++i){
        if(indeg[i] == 0){
            q.push(i);
        }
    }

    std::vector<int> L; //Aqui va el orden

    // 3) mientras haya nodo sin entrada
    while (!q.empty()){
        int u = q.front(); q.pop();
        L.push_back(u);

        // remover u : bajar el grado de entrada de sus vecinos
        for(int v : G[u]){
            indeg[v]--;
            if(indeg[v] == 0){
                q.push(v);
            }
        }

    }

    //si no metimos a todos, habia ciclo
    if((int)L.size() != n){
        //grafo ciclico
        return {}; // regresamos vacio para indicar error
    }

    return L;
}


int main(){

    //ejemplo: 0 -> 1, 0 -> 2, 1 -> 3, 2 -> 3

    std::vector<std::vector<int>> G = {
        {1,2}, //0
        {3},   //1
        {3},   //2
        {}     //3
    };

    auto order = topoSort(G);

    if(order.empty()){
        std::cout << "El grado tiene ciclo\n";
    }else{
        for(int x : order){
            std::cout << x << " ";
        }
        std::cout << "\n";
    }
}