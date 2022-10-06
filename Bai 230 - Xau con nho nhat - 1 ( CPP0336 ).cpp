#include<bits/stdc++.h>
using namespace std;

int s_find(string s, char c){
	int cnt = 0;
	for(int i=0; i<s.size(); i++)
		if(s[i]==c)
			cnt++;
	return cnt;
}

int find(string s, string s2){
	int m = s2.length();
	for(int i=0; i<m; i++)
		if(s_find(s, s2[i]) < s_find(s2, s2[i]))
			return 0;
	return 1;
}

string edit(string s1, string s2){
	int n = s1.length(), m = s2.length(), min = 100;
	string ss = "-1";
	for(int k=m; k<=n; k++){
		for(int i=0; i<=n-k; i++){
			string s = s1.substr(i, k);
			if(find(s, s2)){
				int p = s.size();
				if(p < min){
					ss = s;
					min = p;
				}		
			}
		}
	}
	return ss;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s1, s2;
		cin>>s1>>s2;
		cout<<edit(s1, s2)<<endl;
	}
	return 0;
}


