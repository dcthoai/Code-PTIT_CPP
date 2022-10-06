#include<bits/stdc++.h> 
using namespace std; 

int isPrime(long long n){ 
	if(n<2) 
		return 0; 
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
} 

int check(long long n){
	for(int i=2; i<20; i++){
		if(isPrime(i)){
			if(isPrime(pow(2, i)-1)){
				if(pow(2, 2*i) - pow(2, i) == n*2)
					return 1;
			}
		}
	}
	return 0;
}

int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		long long n; 
		cin >> n; 
		if(check(n))
			cout<<1<<endl;
		else
			cout<<0<<endl; 
	} 
	return 0;
}

