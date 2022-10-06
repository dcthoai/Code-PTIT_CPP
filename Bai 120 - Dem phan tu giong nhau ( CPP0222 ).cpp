#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n], cnt = 0;
        for(int i=0; i<n; i++){
            for(int &j : a[i])
                cin>>j;
            sort(a[i], a[i]+n);
        }
        for(int i=0; i<n; i++){
        	if(a[0][i]!=a[0][i-1]){
	            int tmp = 0;
	            for(int j=0; j<n; j++){
	            	tmp = 0;
	                for(int k=0; k<n; k++)
	                	if(a[0][i]==a[j][k]){
	                		tmp = 1;
	                		break;
						}
					if(!tmp)
						break;
	            }
	            if(tmp)
	                cnt++;
	        }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
