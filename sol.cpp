#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=2*10e4;
int x[mxN], y[mxN], n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> x[i];
		for(int i=0; i<n; ++i)
			cin >> y[i];
		int n1=0, n2=0;
		for(int i=0; i<n; ++i) {
			if(i%2==0) {
				n1+=x[i];
				n2+=y[i];
			} else {
				n1+=y[i];
				n2+=x[i];
			}
		}
		cout << min(n1, n2) << "\n";
	}
}
