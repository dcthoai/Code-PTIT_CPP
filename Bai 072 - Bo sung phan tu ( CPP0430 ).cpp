#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], cnt = 0;
        for(int &i : a)
            cin>>i;
        sort(a, a+n);
        for(int i=1; i<n; i++)
            if(a[i]-a[i-1]>1)
                cnt+=a[i]-a[i-1]-1;
        cout<<cnt<<endl;
    }
    return 0;
}
