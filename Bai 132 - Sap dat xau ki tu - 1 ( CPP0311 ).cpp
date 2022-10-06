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
		int n = s.length(), a[300] = {0}, tmp = 1;
		int max = (n%2==0) ? n/2 : n/2+1;
		for(int i=0; i<n; i++)
			a[s[i]]++;
		for(int i=0; i<n; i++){
			if(a[s[i]] > max){
				cout<<0<<endl;
				tmp = 0;
				break;
			}
		}
		if(tmp)
			cout<<1<<endl;	
	}
	return 0;
}

