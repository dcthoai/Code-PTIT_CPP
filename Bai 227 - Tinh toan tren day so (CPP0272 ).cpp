#include<bits/stdc++.h>

using namespace std;

long long a[100], n, h = 1, g;
const long long M = 1000000007;

void Total_GCD(){
	g = a[0];
	for(int i=1; i<n; i++)
		g = __gcd(g, a[i]);
}

long long a_pow_b(long long a, long long b){
	long long s = 1;
	if(a==0)
		return 0;
	a%=M;
	if(b==0)
		return 1;
	if(b==1)
		return a;
	for(long long i=1; i<=b; i++)
		s = s*a % M;
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
			h = (h*a[i]) % M;
		}
		Total_GCD();
		cout<<a_pow_b(h, g)<<endl;
		h = 1;
	}
	return 0;
}

