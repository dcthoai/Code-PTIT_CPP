#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		long long sum = 0;
		for(int i=0; i<str.size(); i++){
			if(i%2==0)
				sum+=str[i]-'0';
			else
				sum-=str[i]-'0';
		}
		if(sum%11==0)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}

