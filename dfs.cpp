//�������� ������ ����� � ������� (������ � �������). �������� �������� ������ � ��������� ������� � ���������� ��� �������, ���������� �� ��� �� ������ �����
#include <bits/stdc++.h>
using namespace std;

int N; //���������� ������
vector<vector<int>> a(N); //����, �������������� � ���� ������� ���������
vector<int> visited(N, false);

int dfs(int s){ //s - ������� �������
    if (visited[s]) return; //���� ������ ������� ��� ��������, �� ���������� ��
    visisted[s]=true;
    //���������� ������� s
    for (auto u: a[s])
        dfs(u);
}

signed main (){

}
