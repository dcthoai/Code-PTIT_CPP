#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;


void swap_char(char &x, char &y){
    char tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, a;
        cin>>n>>a;
        string s[10], number = "";
        s[2] = "2";
        s[3] = "3";
        s[4] = "223";
        s[5] = "5";
        s[6] = "53";
        s[7] = "7";
        s[8] = "7222";
        s[9] = "7332";
        while(a>0){
            int tmp = a%10;
            if(tmp>1)
                number += s[tmp];
            a/=10;
        }
        for(int i=0; i<number.size(); i++){
            for(int j=i+1; j<number.size(); j++)
                if(number[i] < number[j])
                     swap_char(number[i], number[j]);
        }
        cout<<number<<endl;
    }
    return 0;
}
