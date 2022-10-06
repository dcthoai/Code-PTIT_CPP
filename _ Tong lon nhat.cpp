#include<bits/stdc++.h>

using namespace std;
int sum(int a[], int b[], int m, int n) {
    int s = 0;
    int cnt = 0;
    for(int i=0; i<m; i++){
        cnt += a[i];
        int tmp = 0;
        for(int j=i+1; j<n; j++)
            tmp += b[j];
        if(cnt+tmp > s) 
            s = cnt+tmp;
    }
    return s;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        for(int &i : a)
            cin>>i;
        for(int &i : b) 
            cin>>i; 
        int sum1 = sum(a, b, m, n);
        int sum2 = sum(b, a, n, m);
        if(sum1 < sum2)
            sum1 = sum2;
        cout<<sum1<<endl;
    }
}
