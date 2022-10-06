#include<iostream>
using namespace std;

void Product_max(long long a[], int n) {
    long long max=-10000000;
    for(int i=0; i<n; i++) {
        long long s = 1;
        for(int j=i; j<n; j++){
            s*=a[j];
            if(s > max)
                max = s;
        }
    }
    cout<<max<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        Product_max(a, n);
    }
    return 0;
}
