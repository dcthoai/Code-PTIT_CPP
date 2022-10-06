#include<iostream>
#include<cmath>
using namespace std;

int so_nto(int n){
	if(n<2)
		return 0;
	if(n<4)
		return 1;
	if(n%2==0 || n%3==0)
		return 0;
	for(int i=5; i<=sqrt(n); i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, test = 0;
		cin>>n;
		for(int i=2; i<=n/2; i++){
			if(so_nto(i)){
				if(so_nto(n-i)){
					cout<<i<<' '<<n-i<<endl;
					test = 1;
					break;
				}
			}
		}
	}
	return 0;
}

