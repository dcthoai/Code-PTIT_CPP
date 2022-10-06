#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		int a[n], cnt=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==x)
				cnt++;
		}
		if(cnt)
			cout<<cnt<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}

