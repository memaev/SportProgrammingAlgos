//???????? ?????? ? ?????? (breadth-first search - BFS). ??????? ?????? ?????????? ? ??????? ??????????? ?????????? ?? ????????? ???????.
//?????????????, ? ??????? ?????? ? ?????? ?? ?????? ????????? ?????????? ?? ????????? ??????? ?? ???? ?????????.
//?????????? ?????? ? ?????? ???????? ?? ??????? ??????. ?? ?????? ???? ?????????????? ????????? ???? ?? ???????. ? ??????? ???? ??????????????, ??? ????
//??????????? ???????? ?????????

#include <bits/stdc++.h>
using namespace std;

int N; //???-?? ?????? ? ?????(? ???? ????? ??????)
vector<vector<int>> a; //??????? ????????? ?????
queue<int> b; //??????? ???????? ???????, ?????????? ????????? ? ??????? ??????????? ??????????. ????? ??????? ??????????? ? ????? ???????, ? ?????????????? ???????
//, ??????????? ? ?????? ???????.
vector<bool> visited(N, false); //? ??????? visited ???????? ?????????? ? ???, ????? ??????? ??? ??????????
vector<int> distance(N); //? ??????? distance ???????? ?????????? ?? ????????? ??????? ?? ???? ????????? ?????? ?????
int x; //???????, ? ??????? ???????? ?????(? ???? ????? ??????)

//?????, ???????????? ? ??????? x, ??????????? ???? ???????
int main (){
    visited[x]=true;
    distance[x]=0;
    b.push(x);
    while(!b.empty()){
        int s = b.front();
        b.pop();
        //?????????? ??????? s
        for (auto u:a[s]){
            if (visited[u]) continue;
            visited[u]=true;
            distance[u]=distance[s]+1;
            b.push(u);
        }
    }
    return 0;
}
