#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int d, c;
        cin>>d>>c;
        int a[d][c], b[d*c], m = d*c, n = 0, cnt = 0;
        for(int i=0; i<d; i++)
            for(int j=0; j<c; j++)
                cin>>a[i][j];
                
        while(cnt<m){
            for(int i=n; i<c-n; i++)
            	b[cnt++] = a[n][i];
            for(int i=n+1; i<d-1-n; i++)
            	b[cnt++] = a[i][c-n-1];
            for(int i=c-n-1; i>=n; i--)
            	b[cnt++] = a[d-1-n][i];
            for(int i=d-2-n; i>n; i--)
            	b[cnt++] = a[i][n];
            n++;   
        } 
        for(int i=0; i<m; i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}

