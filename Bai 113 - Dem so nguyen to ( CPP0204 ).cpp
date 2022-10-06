#include<iostream>
#include <cmath>
using namespace std;

int so_nto(long n) {
    if(n<2)
        return 0;
    if(n<4)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=5; i<=sqrt(n); i+=6)
        if(n%i==0 || n%(i+2)==0)
            return 0;
    return 1;
}

int main()
{
    int t; 
    cin>>t;
    while(t--) {
        int L, R, cnt =0;
        cin>>L>>R;
        if(L>R)
            swap(L, R);
        for(int i= L; i<=R; i++)
            if(so_nto(i))
                cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
