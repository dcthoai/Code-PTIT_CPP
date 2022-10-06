#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, cnt = 0; 
        cin >>n;
		int a[n], b[100001];
		for(int i=0; i<=100001; i++)
		    b[i] = 0;
		for(int i=0; i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(int i=0; i<n; i++){
            if(b[a[i]]>1){
                cnt += b[a[i]];
                b[a[i]] = 0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
