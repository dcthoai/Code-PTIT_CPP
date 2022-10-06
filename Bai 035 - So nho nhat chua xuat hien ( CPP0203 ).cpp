#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, tmp = 1;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=1; i>0; i++){
			int cnt = 0;
			for(int j=0; j<n; j++){
				if(i==a[j]){
					cnt++;
					break;
				}
			}
			if(!cnt){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
