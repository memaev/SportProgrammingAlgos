//действует по принципу FIFO (first in - first out)
#include <bits/stdc++.h>

using namespace std;

#define wt int t; cin >> t; while (t--)
#define init ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main (){
	init;
	int n;
	cin >> n;
	queue<int> q;
	int buff;
	for (int i=0; i<n; ++i){
		cin >> buff;
		q.push(buff);
	}

	cout << "{";
	for (int i=0; i<n; ++i){
		if (i==n-1) cout << q[i] << "}";
		else cout << q[i] << ", ";
	}
		
	return 0;
}
