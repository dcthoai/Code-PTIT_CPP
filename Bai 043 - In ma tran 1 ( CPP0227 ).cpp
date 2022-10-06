#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >>n;
		int a[n][n], b[n][n];
		for(int i=0; i<n ; i++)
			for(int j=0; j<n; j++)
				cin>>a[i][j];
		for(int i=0; i<n ; i++) {
			if(i%2==0) {
				for(int j=0; j<n; j++)
					b[i][j] = a[i][j];
			} else {
				for(int j=0; j<n; j++)
					b[i][j] = a[i][n-1-j];
			}
		}
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cout<<b[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}
