#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
		long long b, M, cnt=0, res=1;
		string a;
		cin>>a>>b>>M;
		for(int i=0; i<a.length(); i++)
			cnt = (cnt*10 + a[i]-48) % M;
			
		while(b>0){ 
	        if(b&1) 		// b la so le
	            res = (res*cnt) % M; 
	        b = b>>1; 		// b = b/2 
	        cnt = (cnt*cnt) % M;   
    	}
		cout<<res<<endl;		
	}
	return 0;
}


