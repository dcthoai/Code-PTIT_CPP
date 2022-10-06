#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			char tmp = s[i];
			int cnt=1;
			while(s[i+1]==tmp){
				cnt++;
				i++;
			}
			cout<<tmp<<cnt;
		}
		cout<<endl;
	}
	return 0;
}

