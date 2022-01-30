#include <bits/stdc++.h>

using namespace std;

#define wt int t; cin >> t; while (t--)
#define init ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void print (deque<int> *d){
	cout << endl << "{";
	for (int i=0; i<d->size(); ++i){
		if (i==d->size()-1){ cout << d->at(i) << "}"; return; }
		else cout << d->at(i) << ", ";
	}
}

int main (){
	init;
	deque<int> deq;
	int n; cin >> n;
	int buff;
	for (int i=0; i<n; ++i){
		cin >> buff;
		deq.push_back(buff);
	}

	deq.push_front(333);
	print(&deq);

	return 0;
}
