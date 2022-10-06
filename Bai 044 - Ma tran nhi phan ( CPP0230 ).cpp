#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >>n;
	int a[n][3];
	for(int i=0; i<n ; i++) {
		int count = 0;
		cin>>a[i][0];
		if(a[i][0]==1)
			count++;
		cin>>a[i][1];
		if(a[i][1]==1)
			count++;
		cin>>a[i][2];
		if(a[i][2]==1)
			count++;
		if(count>1)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
