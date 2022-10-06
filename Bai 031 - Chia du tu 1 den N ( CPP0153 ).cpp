#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k, sum = 0;
		cin>>n>>k;
		for(int i=1; i<=n; i++){
			sum+=i%k;
		}
		cout<<sum<<endl;
	}
	return 0;
}

