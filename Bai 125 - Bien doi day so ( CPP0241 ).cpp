#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], cnt=0, l=0, r=n-1;
		for(int &i : a)
			cin>>i;
		while(l<r){
			if(a[l] != a[r]){
				if(a[l] > a[r])
					a[--r] += a[r+1];
				else
					a[++l] += a[l-1];
				cnt++;
			}else{
				l++;
				r--;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

