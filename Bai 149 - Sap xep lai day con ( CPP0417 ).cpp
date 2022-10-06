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
        int a[n], b[n], a_begin, a_end;
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        for(int i=0; i<n; i++)
            if(b[i] != a[i]){
                a_begin = i+1;
                break;
            }
        for(int i=n-1; i>0; i--)
            if(b[i] != a[i]){
                a_end = i+1;
                break;
            }
        cout<<a_begin<<' '<<a_end<<endl;
    }
    return 0;
}
