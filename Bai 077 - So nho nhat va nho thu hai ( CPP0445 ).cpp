#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, tmp = 1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)             
            cin>>a[i];
        sort(a, a+n);
        int min = a[0];
        for(int i=1; i<n; i++)
            if(a[i]>min){
                cout<<min<<' '<<a[i]<<endl;
                tmp = 0;
                break;
            }
        if(tmp)
            cout<<-1<<endl;
    }
    return 0;
}
