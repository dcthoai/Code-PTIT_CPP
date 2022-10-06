#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i=2;
		cin>>n;
		while(n>1){
			int cnt = 0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			if(cnt)
				cout<<i<<' '<<cnt<<' ';
			i++;
		}
		cout<<endl;
	}
	return 0;
}

