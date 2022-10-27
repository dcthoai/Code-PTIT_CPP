#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            a[i] = 0;
        for(int i=0; i<pow(2, n); i++) {
            for(int j : a)                 
                cout<<j;
            cout<<" ";
            int j = n-1;
            while(a[j]==1 && j>0){
                a[j] = 0;
                j--;
            }
            a[j] = 1;
        }
        cout<<endl;
    }
}
