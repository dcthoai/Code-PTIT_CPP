#include<iostream>
#include<sstream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1, s2, tmp, str[100];
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss(s1);
		int n = 0;
		while(ss>>tmp)
			str[n++] = tmp;
		sort(str, str+n);
		for(int i=0; i<n; i++)
			if(str[i]>str[i-1] && s2.find(str[i]) == string::npos)
				cout<<str[i]<<' ';
		cout<<endl;
	}
	return 0;
}
