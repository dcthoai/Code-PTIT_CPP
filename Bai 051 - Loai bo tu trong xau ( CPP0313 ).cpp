#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	getline(cin, a);
	getline(cin, b);
	stringstream ss(a);
	string tmp;
	while(ss>>tmp){
		if(tmp!=b) 
			cout<<tmp<<' ';
	}
}
