#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

long long min(long long n){
	long long s=0, i=1;
	while(n>0){
		if(n%10==6)
			s=s+5*i;
		else
			s=s+(n%10)*i;
		n/=10;
		i*=10;
	}
	return s;
}

long long max(long long n){
	long long s=0, i=1;
	while(n>0){
		if(n%10==5)
			s=s+6*i;
		else
			s=s+(n%10)*i;
		n/=10;
		i*=10;
	}
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a, b;
		cin>>a>>b;
		cout<<min(a)+min(b)<<" "<<max(a)+max(b)<<endl;
	}
}
