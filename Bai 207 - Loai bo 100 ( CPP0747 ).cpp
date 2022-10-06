#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
    int ans = 0;
    for(int i=0; i<s.length()-2; i++){
        if(s=="") 
            break;
        if(s[i]=='1' && s[i+1] =='0' && s[i+2]=='0'){
            ans += 3;
            s.erase(i, 3);
            i = 0;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int res = solve(s);
        if(res == 0)
            cout<<""<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}
