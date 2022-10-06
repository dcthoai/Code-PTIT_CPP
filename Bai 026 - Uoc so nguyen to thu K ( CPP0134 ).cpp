#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, k;
		cin>>n>>k;
		int cnt = 0;
		for(long i=2; i<=sqrt(n); i++){
			while(n%i==0){
				cnt++;
				n/=i;
				if(cnt==k){
					cout<<i<<endl;
					break;
				}
			}
		}
		if(cnt<k){
			if(n>1)
				cnt++;
			if(cnt==k)
				cout<<n<<endl;
			else
				cout<<"-1"<<endl;
		}
	} 
	return 0;
}
