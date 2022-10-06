#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

long long fibonaci(int n){
	long long fi1 = 1, fi2 = 1, fi;
	if(n<3)
		return 1;
	else{
		n-=2;
		while(n--){
			fi = fi1+fi2;
			fi1 = fi2;
			fi2 = fi;
		}
	}
	return fi;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibonaci(n)<<endl;
	}
	return 0;
}

