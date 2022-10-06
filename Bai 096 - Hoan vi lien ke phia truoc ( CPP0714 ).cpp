#include <iostream>
#include <algorithm>
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
		prev_permutation(a, a+n);
		for(int i : a)
			cout<<i<<' ';
		cout<<endl;
	}
	return 0;
}
