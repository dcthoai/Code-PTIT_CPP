#include<bits/stdc++.h>

using namespace std;

string edit(string s){
	for(int i=0; i<s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	set<string> s;
	string tmp;
	ifstream in("VANBAN.in");
	while(in>>tmp){
		tmp = edit(tmp);
		s.insert(tmp);
	}
	for(auto i : s)
		cout<<i<<endl;
	in.close();
	return 0;
}

