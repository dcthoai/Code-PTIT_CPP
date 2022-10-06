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
		int a[n];
		for(int &i : a)
			cin>>i;
		int max = 0;
		for(int i=0; i<n-1; i++){
			for(int j=n-1; j>i; j--){
				if(a[j] > a[i]){
					if(j-i > max)
						max = j-i;
					break;
				}
			}
		}
		cout<<max<<endl;
	}
	return 0;
}

