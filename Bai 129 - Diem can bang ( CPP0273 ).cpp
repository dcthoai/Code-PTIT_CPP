#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long sum = 0;
		int a[n], count, tmp = 1;
		for(int &i : a){
			cin>>i;
			sum+=i;
		}
		count = a[0];
		for(int i=1; i<n; i++){
			count += a[i];
			if(count==sum-count+a[i]){
				tmp = 0;
				cout<<i+1<<endl;
				break;
			}
		}
		if(tmp)
			cout<<-1<<endl;
	}
	return 0;
}

