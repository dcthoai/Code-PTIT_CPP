#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int d, c;
		cin>>d>>c;
		int a[d][c], n = d*c;
		for(int i=0; i<d; i++)
			for(int &j : a[i])
				cin>>j;
		int cnt = 0, b[n], k=0;
		while(cnt<n){
			for(int i=k; i<c-1-k; i++)
				b[cnt++] = a[k][i];
			for(int i=k; i<d-1-k; i++)
				b[cnt++] = a[i][c-k-1];
			for(int i=c-k-1; i>k; i--)
				b[cnt++] = a[d-k-1][i];
			for(int i=d-k-1; i>k; i--)
				b[cnt++] = a[i][k];
			if(cnt==n-1 && c%2==1){
				b[cnt++] = a[d/2][c/2];
				break;
			}
			k++;
		}
		for(int i=n-1; i>=0; i--)
			cout<<b[i]<<' ';
		cout<<endl;
	}
	return 0;
}

