#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, cnt = 0;
		cin>>n;
		int a[n+1] = {0};
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++){
			if(a[i] > 0){
				if(a[i] == a[i+1]){
					cout<<2*a[i]<<' ';
					cnt++; 
					a[i+1] = 0; 
					i++; 
				}else{
					cnt++; 
					cout<<a[i]<<' ';
				}
			}
		} 
		for(int i=0; i<n-cnt; i++)
			cout<<0<<' '; 
		cout<<endl; 
	} 

	return 0;
}

