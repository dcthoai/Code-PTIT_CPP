#include<bits/stdc++.h>
using namespace std;

long long LCM(long long a, long long b){
	return a*b/ __gcd(a, b);
}

long long LCM_3(int x, int y, int z, long long t){
	long long m = LCM(x, y);
	long long n = LCM(m, z), tmp = n;
	n = n*(t/tmp);
    while(1){
        if(n>=t*10)
            return 0;
        if(n>=t)
            return n;
        n+=tmp;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z, n;
        cin>>x>>y>>z>>n;
        long long m = pow(10, n-1);
        long long cnt = LCM_3(x, y, z, m);
        if(cnt)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
