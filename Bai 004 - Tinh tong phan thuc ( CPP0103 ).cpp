#include<iostream>
#include<cctype>
#include<iomanip>

using namespace std;

int main()
{
        long n;
        cin>>n;
        double sum = 0;
        for(long i=1; i<=n; i++)    
            sum += 1/(float)i;
        cout<<fixed<<setprecision(4)<<sum<<endl;
    
    return 0;
}
