#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

const long long mod = 1e9+7;
long long c[1005][1005]; 

int main(){
	for(int i=0; i<=1001; i++){
		for(int j=0; j<=i; j++){
			if(i==j || j==0) 
				c[i][j] = 1;
			else
				c[i][j] = c[i-1][j-1] + c[i-1][j];
			c[i][j] %= mod; 
		} 
	} 
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		cout<<c[n][k]<<endl; 
	}
	return 0;
}


