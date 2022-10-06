#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, p;
        cin>>n>>p;
        int cnt = 0, count, i=1;
        while(p*i<=n) {
            count = p*i;
            while(count % p == 0){        
                cnt++;
                count/=p;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
}
