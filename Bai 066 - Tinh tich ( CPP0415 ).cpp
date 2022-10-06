#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		long long a[n], b[m];
		for(long long &i : a)
			cin>>i;
		for(long long &i : b)
			cin>>i;
		sort(a, a+n);
		sort(b, b+m);
		long long s = a[n-1]*b[0];
		cout<<s<<endl;
	}
	return 0;
}

