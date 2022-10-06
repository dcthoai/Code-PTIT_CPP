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
		int a[n], max = -1000;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]>max)
				max = a[i];
		}
		cout<<max<<endl;
	} 
	return 0;
}

