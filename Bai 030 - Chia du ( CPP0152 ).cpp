#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int a, m, test = 1;
		cin>>a>>m;
		for(int i=0; i<m; i++){
			if(a*i%m==1){
				cout<<i<<endl;
				test = 0;
				break;
			}
		}
		if(test)
			cout<<-1<<endl;
	}
	return 0;
}

