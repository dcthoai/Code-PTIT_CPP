#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s, token, str[1000];
		getline(cin, s);
		stringstream ss(s);
		int n=0;
		while(ss>>token)
			str[n++] = token;
		for(int i=n-1; i>=0; i--)
			cout<<str[i]<<' ';
		cout<<endl;
	}
	return 0;
}

