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
		int a[n+m];
		for(int &i : a)
			cin>>i;
		sort(a, a+n+m);
		for(int i : a)
			cout<<i<<' ';
		cout<<endl;
	}
	return 0;
}

