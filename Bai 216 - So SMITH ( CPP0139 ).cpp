#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int nto(long long n){
	if(n<2)
		return 0;
	if(n<4)
		return 0;
	if(n%2==0 || n%3==0)
		return 0;
	for(int i=5; i<=sqrt(n); i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}

long sum_n(long long n){
	long sum = 0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}

long sum_ts(long long n){
	int sum = 0;
	for(long i=2; i<=sqrt(n); i++){
		while(n%i==0){
			if(i>9)
				sum += sum_n(i);
			else
				sum += i;
			n/=i;
		}
	}
	if(n>9)
		sum += sum_n(n);
	if(n>1 && n<=9)
		sum += n;
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(nto(n))
			cout<<"NO"<<endl;
		else{
			if(sum_n(n) == sum_ts(n))
				cout<<"YES"<<endl;
			else	
				cout<<"NO"<<endl;
		}
	}

	return 0;
}


