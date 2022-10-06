#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string number;
		cin>>number;
		int test = 1;
		for(int i=0; i<number.size()-1; i++)
			if(number[i+1]-number[i]!=1 && number[i+1]-number[i]!=-1){
				test = 0;
				break;
			}
		if(test)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	} 
	return 0;
}

