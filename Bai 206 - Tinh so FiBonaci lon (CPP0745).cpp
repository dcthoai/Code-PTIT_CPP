#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

long long MOD = 1e9 + 7, fi[1005];

void fibonaci(){
	fi[0] = 0;
	fi[1] = fi[2] = 1;
	for(int i=3; i<1005; i++)
		fi[i] = (fi[i-1]%MOD + fi[i-2]%MOD) % MOD;
}

int main(){
	int t, n;
	cin>>t;
	fibonaci();
	while(t--){
		cin>>n;
		cout<<fi[n]<<endl;
	}
	return 0;
}


