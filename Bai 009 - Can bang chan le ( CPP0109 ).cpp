#include<iostream>
#include<cmath>
using namespace std;

int number(int n){
	int chan = 0, le = 0;
	while(n>0){
		if((n%10)%2==0)
			chan++;
		else
			le++;
		n/=10;
	}
	if(chan==le)
		return 1;
	return 0;
}

int main(){
	int n;
	cin>>n;
	if(n==2){
		int cnt=0;
		for(int i=10; i<100; i++){
			if(number(i)){
				cout<<i<<' ';
				cnt++;
			}
			if(cnt==10){
				cout<<endl;
				cnt = 0;
			}
		}	
	}
	if(n==4){
		int cnt=0;
		for(int i=1000; i<10000; i++){
			if(number(i)){
				cout<<i<<' ';
				cnt++;
			}
			if(cnt==10){
				cout<<endl;
				cnt = 0;
			}
		}	
	}
	if(n==6){
		int cnt=0;
		for(int i=100000; i<1000000; i++){
			if(number(i)){
				cout<<i<<' ';
				cnt++;
			}
			if(cnt==10){
				cout<<endl;
				cnt = 0;
			}
		}	
	}
	return 0;
}

