#include<iostream>
#include<algorithm>
using namespace std;

int pytago(long long a[], long long n) {
    for(long long i=n-1; i>1; i--) {
        long long l=0, r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i])                 
                return 1;
            else{
                if(a[l]+a[r]>a[i])   
                    r--;
                else                    
                    l++;
            }
        }
    }
    return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++) {
            long long m;
            cin>>m;
            a[i] = m*m;
        }
        sort(a, a+n);
        if(pytago(a, n))            
            cout<<"YES\n";
        else             
            cout<<"NO\n";
    }
    return 0;
}
