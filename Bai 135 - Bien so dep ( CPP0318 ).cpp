#include<iostream>
using namespace std;

int check1(string s){
    for(int i=1; i<s.size(); i++)
        if(s[i] <= s[i-1])
            return 0;
    return 1;
}

int check2(string s){
    for(int i=0; i<s.size(); i++)
        if(s[i] != '6' && s[i] != '8')
            return 0;
    return 1;
}

int check3(string s){
    for(int i=1; i<3; i++)
        if(s[i] != s[i-1])
            return 0;
    if(s[3] != s[4])
        return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string bien_so, s = "";
        cin>>bien_so;
        for(int i=0; i<bien_so.size(); i++)
            if(bien_so[i]=='-'){
                for(int j=i+1; j<bien_so.size(); j++)
                    if(bien_so[j] != '.')
                        s += bien_so[j];
                break;
            }
        if(check1(s) || check2(s) || check3(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
