#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k, cnt = 0;
		cin>>n>>k;
		int a[n];
		for(int &i : a)
			cin>>i;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]+a[j]==k)
					cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

