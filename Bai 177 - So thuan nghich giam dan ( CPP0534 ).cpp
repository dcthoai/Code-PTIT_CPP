#include<bits/stdc++.h>
using namespace std;

struct number{
	string str;
	int cnt; 
}; 

int check(string s){
	int n = s.length();
	for(int i=0; i<=n/2; i++)
		if(s[i] != s[n-1-i])
			return 0;
	return 1;
}

int checkk(string a, string b){
	if(a.size() > b.size())
		return 0;
	if(a.size() < b.size())
		return 1;
	for(int i=0; i<a.size(); i++)
		if(a[i] > b[i])
			return 0;
	return 1;
} 

void sort_list(struct number num[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++)
			if(checkk(num[i].str, num[j].str))
				swap(num[i], num[j]);
	}
}

int main(){
	string s;
	int i = 0;
	map<string, int> mp;
	while(cin>>s){
		if(check(s) && s.length()>1)
			mp[s]++;
	}
	struct number num[mp.size()]; 
	for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
		num[i].str = it->first;
		num[i].cnt = it->second;
		i++;
	}
	sort_list(num, i);
	for(int j=0; j<i; j++)
		cout<<num[j].str<<' '<<num[j].cnt<<endl;
	return 0;
}

