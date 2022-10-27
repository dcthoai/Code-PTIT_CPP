#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int n; 
		cin>>n; 
		int a[n], cnt = 0, cnt2 = 0, max = 0;
		for(int &x:a){
			cin>>x; 
			while(x>0){
				if(x%2==0){
					cnt++;
					x/=2;
				}else{
					cnt2++;
					x--;
				}
			}
			if(cnt > max)
				max = cnt;
			cnt = 0;
		}
		cout<<max+cnt2<<endl; 
	} 
	return 0;
}
