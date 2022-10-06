#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string str, tmp;
		getline(cin, str);
		int cnt = 0;
		stringstream ss(str);
		while(ss>>tmp)
			cnt++;
		cout<<cnt<<endl;
	} 
	return 0;
}
