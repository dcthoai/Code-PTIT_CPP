#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		cout<<a[0]*a[1]<<' ';
		for(int i=1; i<n-1; i++)
			cout<<a[i-1]*a[i+1]<<' ';
		cout<<a[n-2]*a[n-1]<<endl;
	}
	return 0;
}

