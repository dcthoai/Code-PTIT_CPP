#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int nto(int n){
    if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}

int GCD(int u, int v) {
    while (v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    return u;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x, cnt = 0;
        cin>>x;
        for(int i=1; i<x; i++)
            if(GCD(x, i)==1)
                cnt++;
        if(nto(cnt))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
