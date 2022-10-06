#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n>>k;
        int a[n], index = 0;
        for(int &i : a)
            cin>>i;
        for(int i=0; i<n; i++)
            if(k==a[i]){
                index = i+1;
                break;
            }
        if(index)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
}
