#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool cmp(string &a, string &b){
    return a+b > b+a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long a;
        string s[n];
        for(int i=0; i<n; i++){
            cin>>a;
            s[i] = to_string(a);
        }
        sort(s, s+n, cmp);
        for(string i : s)
            cout<<i;
        cout<<endl;
    }
    return 0;
}
