#include <bits/stdc++.h>
using namespace std;

int binarySearch (vector<int> *a, int left, int right, int key){
	int mid = 0;
	while(1){
		mid = (left+right)/2; //пересчитываем середину
		if (a->at(mid)>key) right=mid-1;
		else if (a->at(mid)<key) left=mid+1;
		else return mid; //иначе данное серединное значение равно искомому

		if (right<left) //если границы сомкнулись, значит элемент не был найден => возвращаем -1
			return -1;
	}
}

int main (){
	int n;
	cout << "Enter size of the array: "; cin >> n;
	vector<int> a(n);
	cout << "Enter array: ";
	for (int i=0; i<a.size(); ++i) cin >> a[i];
	cout << "Enter key to search: ";
	int key; cin >> key;
	sort(a.begin(), a.end());
	int index = binarySearch(&a, 0, a.size()-1, key);
	cout << "Element is with index: " << index;
	return 0;
}
