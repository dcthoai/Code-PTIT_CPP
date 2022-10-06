#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int &i : a)
            cin>>i;
        sort(a, a+n);
        if(n%2==0) {
            for(int i=0, j=n/2; j<n; i++, j++)
                cout<<a[i]<<" "<<a[j]<<" ";
        } else {
            for(int i=0, j=n/2+1; j<n; i++, j++)
                cout<<a[i]<<" "<<a[j]<<" ";
            cout<<a[n/2];
        }
        cout<<endl;
    }

    return 0;
}
