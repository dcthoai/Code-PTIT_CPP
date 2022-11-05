#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void print(int a[], int k){
    for(int i=1; i<=k; i++)
        cout<<a[i];
    cout<<" "; 
}

void next_combination(int a[], int n, int k, int &stop){
    int i=k;
    while(i>0 && a[i]==n-k+i) 
		i--;
    if(i > 0){
        a[i]++;
        for(int j=i+1; j<=k; j++)
            a[j] = a[i]+j-i;
    }else 
    	stop = 0; 
}
 
 int check(int a[], int n){
	for(int i=0; i<=n/2; i++)
		if(a[i]!=a[n-i-1])
			return 0;
	return 1;
}
 
int main () {
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[k]; 
		for(int i=1; i<=k; i++)
			a[i] = i; 
		int stop = 1;
		int cnt = 0;
		while(stop){
			if(check(a, n))
				cnt++;
			next_combination(a, n, k, stop);
		}
		cout<<cnt<<endl; 
	}
    return 0;
}

