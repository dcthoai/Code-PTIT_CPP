#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n, k;
        cin>>n>>k;
        int a[1005];
        long long b[2][1005], max = -999990;
        b[0][0] = 0;
        b[1][0] = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[0][i+1] = b[0][i] + a[i];
        }
        for(int i=k+1; i<=n; i++){
            b[1][i] = b[0][i] - b[0][i-k];
            if(b[1][i] > max)
                max = b[1][i];
        }
        for(int i=k+1; i<=n; i++){
            if(b[1][i] == max){
                for(int j=i-k; j<i; j++)
                    cout<<a[j]<<' ';
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
