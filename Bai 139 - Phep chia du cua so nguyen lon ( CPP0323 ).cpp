#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
		long long tmp, cnt = 0;
		string num;
		cin>>num>>tmp;
		for(int i=0; i<num.size(); i++){
			cnt = (cnt*10 + num[i]-'0') % tmp;
		}
		cout<<cnt<<endl;
	}
	return 0;
}

