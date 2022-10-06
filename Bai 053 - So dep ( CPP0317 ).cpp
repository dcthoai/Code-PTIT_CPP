#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string number;
		cin>>number;
		int n = number.size();
		for(int i=0; i<=n/2; i++){
			if(number[i]!=number[n-i-1] || number[i]%2!=0 || number[n-i-1]%2!=0){
				cout<<"NO"<<endl;
				n = -1;
				break;
			}
		}
		if(n>-1){
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

