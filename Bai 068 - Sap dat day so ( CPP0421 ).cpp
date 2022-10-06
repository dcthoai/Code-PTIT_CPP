#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int find(long long a[], int n, int x){
	for(int i=0; i<n; i++)
		if(x==a[i])
			return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++){
			if(find(a, n, i))
				cout<<i<<' ';
			else
				cout<<-1<<' ';
		}
		cout<<endl;
	}
	return 0;
}

