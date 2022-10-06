#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n], min = 1000000, index1, index2;
        for(int i=0; i<n; i++)             
            cin>>a[i];
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++){
                int x = abs(a[j]+a[i]);
                if(x<min){
                    min = x;
                    index1 = i;
                    index2 = j;
                }
            }
        cout<<a[index1]+a[index2]<<endl;
    }
    return 0;
}
