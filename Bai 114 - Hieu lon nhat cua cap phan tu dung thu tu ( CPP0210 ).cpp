#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], tmp = -999999;
        for(int &i : a)
            cin>>i;
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                if(a[j]-a[i]>tmp)
                    tmp = a[j]-a[i];  
        cout<<tmp<<endl;
    }
    return 0;
}
