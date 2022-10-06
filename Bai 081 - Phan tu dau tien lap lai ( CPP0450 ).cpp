#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], tmp=1;
		for(int &i : a)
			cin>>i;
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[i]==a[j]){
					cout<<a[i]<<endl;
					tmp = 0;
					break;
				}
			}
			if(!tmp)
				break;
		}	
		if(tmp)
			cout<<"-1"<<endl;
	}
	return 0;
}

