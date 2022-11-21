#include<bits/stdc++.h>

using namespace std;

string to_lower_string(string s){
	for(int i=s.size()-1; i>=0; --i)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	string s;
	vector<string> v;
	while(cin>>s)
		v.push_back(to_lower_string(s));
	bool check = 1;
	for(string ss : v){
		if(ss[ss.size()-1]=='.' || ss[ss.size()-1]== '!' || ss[ss.size()-1]=='?'){
			ss.erase(ss.end()-1);
			if(ss != ""){
				if(check)
					ss[0] = toupper(ss[0]);
					cout<<ss<<endl;
			}
			check = 1;
		}else{
			if(check){
				ss[0] = toupper(ss[0]);
				cout<<ss<<' ';
				check = 0;
			}else
				cout<<ss<<' ';
		}	
	}
	return 0;
}

