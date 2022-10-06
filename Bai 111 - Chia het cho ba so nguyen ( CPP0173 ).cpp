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

long long LCM(int x, int y, int z, long long t){
    int tmp1 = GCD(x, y);
    long long m = x*y/tmp1;
    long long tmp2 = GCD(m, z);
    long long n = m*z/tmp2;
    long long tmp = n;
    long long tmp3 = t/n;
    n*=tmp3;
    while(1){
        if(n>=(t*10))
            return 0;
        if(n>=t)
            return n;
        n+=tmp;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x, y, z, n;
        cin>>x>>y>>z>>n;
        long long m = pow(10, n-1);
        long long cnt = LCM(x, y, z, m);
        if(cnt)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
