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
		long long sum = 0;
		for(int i=0; i<s.size(); i++){
			long long a = 0;
			while(s[i]>='0' && s[i]<='9'){
				a = a*10+s[i]-'0';
				i++;
			}
			if(a)
				sum+=a;
		}
		cout<<sum<<endl;
	}
	return 0;
}

