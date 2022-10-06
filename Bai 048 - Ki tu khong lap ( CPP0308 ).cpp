#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int a[100001];
		for(int i=0; i<100001; i++)
			a[i] = 0;
		for(int i=0; i<str.size(); i++)
			a[str[i]]++;
		for(int i=0; i<str.size(); i++)
			if(a[str[i]]==1)
				cout<<str[i];
		cout<<endl;
	}
	return 0;
}

