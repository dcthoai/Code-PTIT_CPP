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
        int a[d][c], b[d][c];
        for(int i=0; i<d; i++)
            for(int j=0; j<c; j++)
                cin>>a[i][j];
        int n = (d<c) ? d : c;
        for(int k=0; k<(float)n/2; k++){
            for(int i=k; i<c-k-1; i++)
                b[k][i+1] = a[k][i];
            for(int i=k; i<d-k-1; i++)
                b[i+1][c-k-1] = a[i][c-k-1];
            for(int i=k+1; i<c-k; i++)
                b[d-k-1][i-1] = a[d-1-k][i];
            for(int i=k+1; i<d-k; i++)
                b[i-1][k] = a[i][k];
        }
        if(d==c && d%2==1)
            b[c/2][c/2] = a[c/2][c/2];
        for(int i=0; i<d; i++)
            for(int j=0; j<c; j++)
                cout<<b[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
