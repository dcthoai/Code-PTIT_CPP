#include<iostream>
#include<cmath>
using namespace std;

int so_nto(long long n){
	if(n<2)
		return 0;
	if(n<4)
		return 1;
	if(n%2==0 || n%3==0)
		return 0;
	for(long long i=5; i<=sqrt(n); i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m, n;
		cin>>m>>n;
		for(int i=m; i<=n; i++)
			if(so_nto(i))
				cout<<i<<' ';
		cout<<endl;
	}
	return 0;
} 
