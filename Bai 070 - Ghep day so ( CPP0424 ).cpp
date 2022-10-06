#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k, n;
		cin>>k>>n;
		int a[k*n];
		for(int &i : a)
			cin>>i;
		sort(a, a+k*n);
		for(int i : a)
			cout<<i<<' ';
		cout<<endl;
	}
	return 0;
}

