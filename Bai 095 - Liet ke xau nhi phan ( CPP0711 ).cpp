#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n] = {0};
		for(int i=0; i<pow(2, n); i++){
			for(int j : a)
				cout<<j;
			cout<<" ";
			int j = n-1;
			a[j]++;
			if(a[j]==2){
				a[j] = 0;
				while(1){
					a[--j]++;
					if(a[j]==2)
						a[j] = 0;
					else
						break;
				}
			}
		}
		cout<<endl;
	}
}   

