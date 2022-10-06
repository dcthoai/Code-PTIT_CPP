#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int check2(string s, int n){
	int cnt = 0;
	for(int i='0'; i<='9'; i++)
		for(int j=0; j<n; j++)
			if(s[j] == i){
				cnt++;
				break;
			}
	if(cnt==10)
		return 1;
	return 0;
}

int check(string s, int n){
	if(s[0]=='0')
		return 0;
	for(int i=0; i<n; i++)
		if(s[i]<'0' || s[i]>'9')
			return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string number;
		cin>>number;
		int n = number.size();
		if(check(number, n)==1)
			if(check2(number, n)==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		if(check(number, n)==0)
			cout<<"INVALID"<<endl;
	}
	return 0;
}

