#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore(1);
	string s[n];
	for(int i = 0; i<n; i++)
		getline(cin, s[i]);
	sort(s, s+n);
	int cnt = 1;
	for(int i=1; i<n; i++){
		if(s[i] != s[i-1])
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
