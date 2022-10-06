#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int canh1, canh2;
	cin>>canh1;
	int a[canh1][canh1];
	for(int i=0; i<canh1; i++)
		for(int &j : a[i])
			cin>>j;
	cin>>canh2;
	int b[canh2][canh2];
	for(int i=0; i<canh2; i++)
		for(int &j : b[i])
			cin>>j;
			
			
	for(int i=0; i<canh1; i+=canh2){
		for(int j=0; j<canh1; j+=canh2){
			for(int k=i; k<i+canh2; k++)
				for(int t=j; t<j+canh2; t++)
					a[k][t]*=b[k%canh2][t%canh2];
		}
	}
	for(int i=0; i<canh1; i++){
		for(int j : a[i])
			cout<<j<<' ';
		cout<<endl;
	}
	return 0;
}

