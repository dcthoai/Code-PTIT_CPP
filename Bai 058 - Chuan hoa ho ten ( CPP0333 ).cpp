#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

string lower(string s){
    s[0] = toupper(s[0]);
    for(int i=1; i<s.size(); i++)
        s[i] = tolower(s[i]);
    return s;
}

string upper(string s){
    for(int i=0; i<s.size(); i++)
        s[i] = toupper(s[i]);
    return s;
}

int main()
{
    string s, word, str[10];
	getline(cin, s);
	stringstream ss(s);
	int n = 0;
	while(ss>>word){
		str[n++] = word;
	}
    for(int i=0; i<n-1; i++){
        string ch = lower(str[i]);
        cout<<ch;
        if(i<n-2)
            cout<<' ';
    }
    cout<<", "<<upper(str[n-1]);
    return 0;
}
