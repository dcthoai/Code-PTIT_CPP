#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        char chr;
        cin>>chr;
        int m = (int )chr;
        if('a'<=m && m<='z')
            chr = toupper(chr);
        if('A'<=m && m<='Z')
            chr = tolower(chr);
        cout<<chr<<endl;
    }
    return 0;
}
