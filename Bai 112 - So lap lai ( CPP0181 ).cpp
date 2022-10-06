#include<iostream>
#include<cmath>
using namespace std;

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
        int a, x, y;
        cin>>a>>x>>y;
        long long tmp = GCD(x, y);
        for(int i=0; i<tmp; i++)
            cout<<a;
        cout<<endl;
    }
    return 0;
}
