#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void print(int a[], int n){
	for (int i=1; i<=n; i++)
		cout<<a[i];
	cout<<' ';
}

void next_permutaion(int a[], int n, int &stop){
	int index = n-1;
	while(index>0 && a[index] > a[index+1])
		index--;
	if(index==0)
		stop = 0;
	else{
		int i = n;
		while(a[index] > a[i]) 		
			i--;
		swap(a[index], a[i]);
		int l = index+1, r = n;
		while(l < r){			
			swap(a[l], a[r]);
			l++;
			r--;
	  	}
	}
}

int check(int a[], int n){
	for(int i=0; i<=n/2; i++)
		if(a[i]!=a[n-i-1])
			return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n]; 
		for(int i=1; i<=n; i++)
			cin>>a[i];
		int stop = 5;
		int cnt = 0;
		while(stop--){
			print(a, n);
			next_permutaion(a, n, stop);
		}
		cout<<cnt<<endl; 
	} 
}

//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		long long m = 1;
//		for(int i=2; i<=n; i++)
//			m*=i; 
//		int a[n];
//		for(int i=1; i<=n; i++)
//			a[i-1] = i;
//		for(int i : a)
//			cout<<i;
//		cout<<' ';
//		while(--m){
//			next_permutation(a, a+n);
//			for(int i : a)
//				cout<<i;
//			cout<<' ';
//		}
//		cout<<endl;	
//	} 
//
//	return 0;
//}
