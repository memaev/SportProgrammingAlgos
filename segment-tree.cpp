//реализация дерева отрезков на c++ с необходимыми функциями
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a; //массив
vector<int> tree; //дерево отрезков, в вершинах хранятся суммы

//построение дерева по изначальному массиву
//v - номер текущей вершины; tl, tr - границы соответствующего отрезка
void build_tree(int v, int tl, int tr){
    if (tl==tr){
        tree[v] = a[tl]; //сумма отрезка из одного элемента равна элементу
    }else{
        //tm - средний элемент отрезка
        //отрезок разбивается на два отрезка [tl; tm], [tm+1; tr]
        int tm = (tl+tr)/2;
        build_tree(v*2, tl, tm);
        build_tree(v*2+1, tm+1, tr);
        tree[v] = tree[v*2]+tree[v*2+1];
    }
}

//запрос суммы
// l, r - границы запроса
// v - номер текущей вершины; tl, tr - границы существующего отрезка
int get_sum(int l, int r, int b, int tl, int tr){
    //вариант 1
    if (l<=tl && tr<=r){
        return tree[v];
    }
    //вариант 2
    if (tr<1 || r<t1){
        return 0;
    }
    //вариант 3 
    int tm = (tl+tr)/2;
    return get_sum(l, r, v*2, tl, tm)+get_sum(l, r, v*2+1, tm+1, tr);
}

//запрос модификации
void update(int idx, int val, int v, int tl, int tr){
    //1
    if (idx<=tl && tr<=idx){
        a[idx]=val;
        tree[v]=val;
        return;
    }
    //2
    if (tr<idx || idx<tl){
        return;
    }
    //3
    int tm = (tl+tr)/2;
    update(idx, val, v*2, tl, tm);
    update(idx, val, v*2+1, tm+1, tr);
    tree[v]=tree[v*2]+tree[v*2+1];
}

signed main (){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cout << "Enter array size: ";
    cin >> n;
    a = vector<int>(n);
    tree = vector<int>(2*n);
    build_tree(1, 0, n-1);
    //get_sum(l, r, 1, 0, n-1);
    //update(idx, val, 1, 0, n-1);
    return 0;
}
