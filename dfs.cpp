//алгоритм обхода графа в глубину (поиска в глубину). јлгоритм начинает работу в начальной вершине и перебирает все вершины, достижимые из нее по ребрам графа
#include <bits/stdc++.h>
using namespace std;

int N; //количество вершин
vector<vector<int>> a(N); //граф, представленный в виде матрицы смежности
vector<int> visited(N, false);

int dfs(int s){ //s - искома€ вершина
0    if (visited[s]) return; //если данна€ вершина уже посещена, то пропускаем ее
    visisted[s]=true;
    //обработать вершину s
    for (auto u: a[s])
        dfs(u);
        dfs(u);
}

int main (){

}
