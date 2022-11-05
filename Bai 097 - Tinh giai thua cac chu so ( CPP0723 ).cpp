#include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b){
	return a>b;
}

int main(){
    int t, n;
    cin>>t;
    while(t--){
        string a;
        cin>>n>>a;
        string s[10] = {"0", "0", "2", "3", "322", "5", "53", "7", "7222", "7332"}, number = "";
        for(int i=0; i<a.size(); i++){
        	if(a[i] > '1')
        		number += s[a[i]-'0'];
		}
        sort(number.begin(), number.end(), cmp);
        cout<<number<<endl;
    }
    return 0;
}
