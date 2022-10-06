#include<iostream>
using namespace std;

void sum_max(long long a[], long long n) {
    long long s=0, max=s-1;
    for(long long i=0; i<n; i++) {
        s+=a[i];
        if(s>max)
            max = s;
        if(s<0)
            s=0;
    }
    cout<<max<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++)
            cin>>a[i];
        sum_max(a, n);
    }
    return 0;
}
