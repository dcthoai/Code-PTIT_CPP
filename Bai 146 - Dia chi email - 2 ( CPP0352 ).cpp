#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

string chuan_hoa(string s){
	for(int i=0; i<s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	string name[n], s[n];
	for(int i=0; i<n; i++){
		getline(cin, name[i]);
		string tmp, str[20];
		stringstream ss(name[i]);
		int cnt = 0;
		while(ss>>tmp)
			str[cnt++] = tmp;
		s[i] = str[cnt-1];
		for(int j=0; j<cnt-1; j++)
			s[i] += str[j][0];
		s[i] = chuan_hoa(s[i]);
	} 
	for(int i=0; i<n; i++){
		cout<<s[i];
		int count = 1;
		for(int j=0; j<i; j++)
			if(s[j]==s[i])
				count++;
		if(count>1)
			cout<<count;
		cout<<"@ptit.edu.vn"<<endl;
	}
	return 0;
}
