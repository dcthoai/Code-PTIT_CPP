#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int s_number = 0;
		cin>>s;
		sort(s.begin(), s.end());
		for(int i=0; i<s.size(); i++){
			if(s[i]>'9'){
				while(i<s.size()){
					cout<<s[i];
					i++;
				}
			}else
				s_number += s[i]-'0';			
		}			
		cout<<s_number<<endl;
	}
	return 0;
}

