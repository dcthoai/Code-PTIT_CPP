#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int canh;
	cin>>canh;
	int n = canh*canh;
	int a[canh][canh], b[n], cnt=0, k=0;
	for(int &i : b)
		cin>>i;
	sort(b, b+n);
	while(cnt<n){
		for(int i=k; i<canh-k; i++)
			a[k][i] = b[cnt++];
		for(int i=k+1; i<canh-1-k; i++)
			a[i][canh-1-k] = b[cnt++];
		for(int i=canh-1-k; i>=k; i--)
			a[canh-1-k][i] = b[cnt++];
		for(int i=canh-2-k; i>k; i--)
			a[i][k] = b[cnt++];
		k++;
	}
	if(n%2==1)
		a[canh/2][canh/2] = b[n-1];
	for(int i=0; i<canh; i++){
		for(int j=0; j<canh; j++)
			cout<<a[i][j]<<' ';			
		cout<<endl;
	}
	return 0;
}
