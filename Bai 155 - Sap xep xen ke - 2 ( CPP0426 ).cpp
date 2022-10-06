#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &i : a)
			cin>>i;
		sort(a, a+n);
		for(int i=n-1, j=0; j<n/2; j++, i--)
			cout<<a[i]<<' '<<a[j]<<' ';
		if(n%2!=0)
			cout<<a[n/2];
		cout<<endl;
	}

	return 0;
}


