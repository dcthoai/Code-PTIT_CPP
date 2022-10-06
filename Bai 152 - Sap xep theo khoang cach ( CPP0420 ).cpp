#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n>>x;
        int a[n], b[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
            b[i] = abs(a[i] - x);
        }
        int pos;
        for(int i=1; i<n; i++) {
            int x=b[i], y = a[i];
            pos = i-1;
            while(pos>=0 && b[pos]>x) {
                b[pos+1] = b[pos];
                a[pos+1] = a[pos];
                pos--;
            }
            b[pos+1] = x;
            a[pos+1] = y;
        }
        for(int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
}




