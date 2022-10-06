#include<iostream>
#include<cstring>
using namespace std;

int find(char a){
	string s = "aeiouy";
	for(int i=0; i<6; i++)
		if(a==s[i])
			return 0;
	return 1;
}

int main(){
	string str;
	cin>>str;
	for(int i=0; i<str.size(); i++)
		str[i] = tolower(str[i]);
	for(int i=0; i<str.size(); i++){
		if(find(str[i]))
			cout<<'.'<<str[i];
	}
	return 0;
}

