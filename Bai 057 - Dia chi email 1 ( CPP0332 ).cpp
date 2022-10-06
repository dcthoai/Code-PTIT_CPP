#include <bits/stdc++.h>
using namespace std;

string lower(string str) {
	for(int i=0; i<str.length(); i++)
		str[i] = tolower(str[i]);
	return str;
}

int main() {
	string s, word, str[10];
	getline(cin, s);
	stringstream ss(s);
	int n = 0;
	while(ss>>word){
		str[n++] = word;
	}
	cout<<lower(str[n-1]);
	for(int i=0; i<n-1; i++){
		char tmp = tolower(str[i][0]);
		cout<<tmp;
	}
	cout<<"@ptit.edu.vn";
	return 0;
}
