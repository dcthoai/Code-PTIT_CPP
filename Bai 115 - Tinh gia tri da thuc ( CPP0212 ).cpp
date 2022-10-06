#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long max = 1E9+7;
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		int a[n];
		for(int &i : a)
			cin>>i;
		long long sum = a[n-1];
		for(int i=0; i<n-1; i++){
			if(a[i]!=0){
				long long s = a[i];
				for(int j=0; j<n-i-1; j++){
					s*=x;
					if(s>max)
						s%=max;
				}
				sum = (sum+s)%max;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
