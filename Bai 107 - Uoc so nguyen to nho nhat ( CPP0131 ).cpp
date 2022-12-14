#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int so_nto(long n){
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
		int n;
		cin>>n;
		cout<<1<<' ';
		for(int i=2; i<=n; i++){
			if(i%2==0)
				cout<<2<<' ';
			else{
				if(so_nto(i))
					cout<<i<<' ';
				else{
					for(int j=2; j<=sqrt(i); j++)
						if(i%j==0){
							if(so_nto(j)){
								cout<<j<<' ';
								break;
							}
						}
				}
			}	
		}
		cout<<endl;
	}
	return 0;
}


