#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k;
    	cin>>n>>k;
    	int a[n], cnt = 0, c = 0;
		for(int &i : a){
			cin>>i;
			if(i<=k)
				cnt++;
		} 
		for(int i=0; i<cnt; i++)
			if(a[i] > k)
				c++;
		int res = c;
		for(int i=cnt, j=0; i<n; i++, j++){
			if(a[i] > k)
				c++;
			if(a[j] > k)
				c--;
			res = res < c ? res : c;
		}
		cout<<res<<endl;
	}
	return 0;
}
