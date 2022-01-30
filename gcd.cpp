#include <bits/stdc++.h>
using namespace std;

int gcd (int a, b){
	if (b==0) return a;
	return gcd(n, m%n);
}

int main (){
	ios::sync_with_stdio(false);
	int a, b;
	cout << "Enter A: "; cin >> a;
	cout << "Enter B: "; cin >> b;
	cout << "GCD: " << gcd(a, b);
	return 0;
}
