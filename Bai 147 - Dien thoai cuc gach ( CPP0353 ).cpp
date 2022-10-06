#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

string upper(string s) {
    for(int i=0; i<s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}

int check(int a[], int n) {
    for(int i=0; i<=n/2; i++)
        if(a[i] != a[n-i-1])
            return 0;
    return 1;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        string ss = "23456789";
        cin>>s;
        s = upper(s);
        int n = s.size();
        int a[n];
        for(int i=0; i<n; i++){
            if(s[i] < 'P')
                a[i] = (s[i]-'A') / 3 + 2;
            else {
                if(s[i] >= 'P' && s[i] <= 'S')
                    a[i] = 7;
                if(s[i] >= 'T' && s[i] <= 'V')
                    a[i] = 8;
                if(s[i] > 'V')
                    a[i] = 9;
            }
        }
        if(check(a, n))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}


