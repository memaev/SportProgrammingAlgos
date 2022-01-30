#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> *a, int l, int r)
{
  if (l == r) return; // границы сомкнулись
  int mid = (l + r) / 2; // определяем середину последовательности
  // и рекурсивно вызываем функцию сортировки для каждой половины
  mergeSort(a, l, mid);
  mergeSort(a, mid + 1, r);
  int i = l;  // начало первого пути
  int j = mid + 1; // начало второго пути
  vector<int> tmp(a->size()); // дополнительный массив
  for (int step = 0; step< r - l + 1; ++step) // для всех элементов дополнительного массива
  {
    if ((j > r) || ((i <= mid) && (a->at(i) < a->at(j)))) 
    {
      tmp[step] = a->at(i);
      i++;
    }//записываем число из первой половины, если во второй половине не осталось элементов (все записаны уже), либо данное число меньше числа из второй половины
    else 
    {
      tmp[step] = a->at(j);
      j++;
    } //иначе записываем число из второй половины
  }
  // переписываем сформированную последовательность в исходный массив
  for (int step = 0; step < r - l + 1; step++)
    a->at(l + step) = tmp[step];
}

int main (){
	int n;
	cin >> n;
	cout << "Enter array: " << endl;
	vector<int> a(n);
	for (int i=0; i<n; ++i) cin >> a[i];
	mergeSort(&a,0, (a.size()-1));
	cout << "After merge sort: " << endl << "{";
	for (int i=0; i<n; ++i){
		if (i==n-1) cout << a[i] << "}";
		else cout << a[i] << ", ";
	}
	return 0;
}
