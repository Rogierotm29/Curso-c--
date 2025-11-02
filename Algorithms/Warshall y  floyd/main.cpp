#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;



vector<vector<int>> transitiveClosure(vector<vector<int>> graph){
    int n = graph.size();

    vector<vector<int>> ans(n, vector<int>(n,0));

    //Copiamos el grafo a la matriz resultado
    for(int i{0}; i < n; i++){
        for(int j {0}; j < n; j++ ){
            ans[i][j] = graph[i][j];
        }
    }

    //Transitive closure para i, i siempre va a ser 1
    for(int i{0}; i < n; i++){
        ans[i][i] = 1;
    }

    //Aplicamos floyd warshall
    //Para cada iteracion del nodo k
    for(int k{0}; k < n; k++){
        for(int i{0}; i < n; i++){
            for(int j{0}; j < n; j++){
                //Checamos si un camino existe entre i a k 
                // y tambien de k a j
                if(ans[i][k] == 1 && ans[k][j] == 1){
                    ans[i][j] = 1;
                }
            }
        }
    }
    return ans;
}


int main(){
    int n {4};
    vector<vector<int>> graph = 
    {{0,1,1,0}, {0,0,1,0}, {1,0,0,1}, {0,0,0,0}};

    vector<vector<int>> ans = transitiveClosure(graph);


    for(int i{0}; i < n; i++){
        for(int j{0}; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}