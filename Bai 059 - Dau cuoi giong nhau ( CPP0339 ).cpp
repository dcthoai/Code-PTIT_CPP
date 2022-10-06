#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string s;
		cin>>s;
		int cnt = s.size(), str[1005];
		for(int i=0; i<1005; i++)
			str[i] = 0;
		for(int i=0; i<s.size(); i++)
			str[s[i]]++;
		for(int i=0; i<s.size(); i++){
			int n = str[s[i]];
			if(n>1){
				cnt+= n*(n-1)/2;
				str[s[i]] = 0;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
