#include<iostream>
#include<cmath>

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

int so_giam(long n){
	while(n>10){
		int a = n%10;
		n/=10;
		int b = n%10;
		if(b<=a)
			return 0;
	}
	return 1;
}

int so_tang(long n){
	while(n>0){
		int a = n%10;
		n/=10;
		int b = n%10;
		if(a<=b)
			return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, cnt = 0;
		cin>>x;
		long m = pow(10, x);
		long n = m/10;
		for(int i=n+1; i<m; i+=2){
			if(so_giam(i) || so_tang(i))
				if(so_nto(i))
					cnt++;	
		}
		cout<<cnt<<endl;
	}
	return 0;
}

