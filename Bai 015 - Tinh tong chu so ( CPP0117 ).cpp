#include<iostream>
using namespace std;

int number(int n){
	int sum = 0;
	while(1){
		while(n>0){
			sum += n%10;
			n/=10;
		}
		n = sum;
		if(sum<10)
			return sum;
		sum = 0;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<number(n)<<endl;
	}
	return 0;
}

