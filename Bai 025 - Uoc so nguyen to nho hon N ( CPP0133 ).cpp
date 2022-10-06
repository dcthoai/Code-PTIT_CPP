#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int o[n+1];
		for(int i=3; i<=n; i+=2)
     	   o[i]=0;
   		if(n>2)
    		cout<<2<<' ';
    	for(int i=3; i<=n; i+=2)
        	if(o[i]==0){
        		cout<<i<<' ';
            	for(int j=2; i*j<=n; j++)
                	o[i*j]=1;
        	}
		cout<<endl;	
	}
	return 0;
}

