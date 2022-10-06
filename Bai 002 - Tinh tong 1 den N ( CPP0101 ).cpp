#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, m;
        cin>>n;
        m = (n*n+n)/2;
        cout<<m<<endl;
    }
    return 0;
}
