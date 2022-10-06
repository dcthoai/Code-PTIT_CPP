#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a[1000004] = {0};
        for(long long i=3; i<=1000000; i+=2){
            if(!a[i]){
                for(long long j=2*i; j<=1000000; j+=i)
                    a[j] = 1;
            }
        }
    int t;
    cin>>t;
    while (t--){
        long long L, R, cnt = 0;
        cin>>L>>R;
        
        if(L<5 && R>3)
            cnt = 1;
        for(long long i=3; i<=sqrt(R); i+=2){
            if(!a[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
