#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

string chuan_hoa(string s){
	s[0] = toupper(s[0]);
	for(int i=1; i<s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int tmp, n=0;
		cin>>tmp;
		cin.ignore();
		string name, token, a[100];
		getline(cin, name);
		stringstream ss(name);
		while(ss>>token)
			a[n++] = token;
		if(tmp==1){
			cout<<chuan_hoa(a[n-1])<<' ';
			for(int i=0; i<n-1; i++)
				cout<<chuan_hoa(a[i])<<' ';
		}else{
			for(int i=1; i<n; i++)
				cout<<chuan_hoa(a[i])<<' ';
			cout<<chuan_hoa(a[0]);
		}
		cout<<endl;
	}
	return 0;
}

