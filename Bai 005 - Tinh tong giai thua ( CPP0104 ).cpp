#include<iostream>
#include<cctype>
#include<iomanip>

using namespace std;

long long giaithua(int n){
    long long s = 1;
    for(int i=1; i<=n; i++)
        s*=i;
    return s;
}

int main()
{
    int n;
    cin>>n;
    long long sum = 0;
    for(int i=1; i<=n; i++)
        sum+= giaithua(i);
    cout<<sum;
    return 0;
}
