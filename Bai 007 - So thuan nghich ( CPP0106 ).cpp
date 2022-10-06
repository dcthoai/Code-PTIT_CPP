#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int tmp = 1, n = str.size();
        for(int i=0; i<n/2; i++)
            if(str[i] != str[n-i-1])
                tmp = 0;
        if(tmp)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
