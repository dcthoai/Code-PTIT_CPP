#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    while(n--){
        int x, y, p;
        cin>>x>>y>>p;
        long long s = 1;
        x %= p;
        y %= p;
        for(int i=1; i<=y; i++)
            s = s*x % p;
        cout<<s<<endl;
    }
}
