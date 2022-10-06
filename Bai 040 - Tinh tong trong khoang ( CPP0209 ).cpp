#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, Q;
		cin>>n>>Q;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int question[Q][2];
		for(int i=0; i<Q; i++)
			cin>>question[i][0]>>question[i][1];
		for(int i=0; i<Q; i++){
			int sum = 0;
			for(int j=question[i][0]-1; j<question[i][1]; j++)
				sum+=a[j];
			cout<<sum<<endl;
		}
	}
	return 0;
}

