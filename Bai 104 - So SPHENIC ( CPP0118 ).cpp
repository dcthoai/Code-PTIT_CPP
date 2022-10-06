#include<iostream>
#include<cmath>

using namespace std;

int so_sphenic(int n){
	int i, cnt = 0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0){
			int tmp = 0;
			while(n%i==0){
				n/=i;
				tmp++;
				if(tmp>1)
					return 0;
			}
			cnt++;
			if(cnt>3)
				return 0;
		}	
	}
	if(n>i) 
		cnt++;
	if(cnt==3)
		return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<so_sphenic(n)<<endl;
	}
	return 0;
}

