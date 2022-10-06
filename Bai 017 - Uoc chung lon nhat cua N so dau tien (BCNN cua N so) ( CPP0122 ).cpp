#include<iostream>
using namespace std;

long long LCM(long long a, long long b) { 
	long long p = a*b; 
	while(b != 0) { 
		long long tmp = a%b; 
		a = b; 
		b = tmp; 
	} 
	return p/a; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long BCNN = 1;
		for(long long i=2; i<=n; i++)
			BCNN = LCM(BCNN, i);
		cout<<BCNN<<endl;
	}
	return 0;
}

