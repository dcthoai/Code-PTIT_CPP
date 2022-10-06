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
        int tmp = 1;
        cin>>str;
        for(int i=0; i<str.size(); i++)
            if(str[i]!='0' && str[i]!='6' && str[i]!='8')
                tmp = 0;
        if(tmp)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
