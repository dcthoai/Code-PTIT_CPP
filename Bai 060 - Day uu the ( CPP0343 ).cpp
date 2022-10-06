#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[201], n=0, chan=0, le=0;
		char c;
		while(1){
			cin>>a[n];
			if(a[n]%2==0)
				chan++;
			else
				le++;
			n++;
			c = getchar();
			if(c=='\n')
				break;
		}
		if(n%2==0){
			if(chan>le)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}else{
			if(le>chan)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}

