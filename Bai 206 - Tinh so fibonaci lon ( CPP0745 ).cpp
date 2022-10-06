#include<iostream>
using namespace std;

int main()
{   
    long long fi[1005], p = 1e9 + 7;
    fi[0] = 0;
    fi[1] = fi[2] = 1;
    for(int i=3; i<=1000; i++)
        fi[i] = ((fi[i-1] % p) + (fi[i-2] % p)) % p;
    int t;
    cin>>t; 
    while (t--){
        int n;
        cin>>n;
        cout<<fi[n]<<endl;   
    }
    return 0;
}
