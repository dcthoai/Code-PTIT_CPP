#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int number(int n){
	int tmp = 1;
	for(int i=1; i<=n; i++){
		tmp*=2;
		if(tmp>9)
			tmp = tmp%10;
	}
	return tmp;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.size(), sum = 0;
		for(int i=0; i<n; i++){
			if(s[i]=='1')
				sum+=number(n-1-i);
		}
		if(sum%5==0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}


