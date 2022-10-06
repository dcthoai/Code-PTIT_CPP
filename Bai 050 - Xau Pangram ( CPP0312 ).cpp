#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		int n, cnt = 0;
		string str;
		cin>>str>>n;
		for(char i='a'; i<='z'; i++){
			if(str.find(i) != string::npos){
				cnt++;	
			}
		}
		if(n>=26-cnt)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}

