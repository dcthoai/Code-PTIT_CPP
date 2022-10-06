#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int fiboanci(long long n){
	long long i=1, j=1;
	long long fi;
	if(n<2)
		return 1;
	while(1){
		fi = i+j;
		i = j;
		j = fi;
		if(fi==n)
			return 1;
		if(fi>n)
			return 0;	
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(fiboanci(n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}


