#include<iostream>
#include<cmath>
#include<map>

using namespace std;

int main(){
	map<int, int> mp;
	int n = 0;
	int a[10000];
	while(cin>>a[n]){
		mp[a[n]]++;
		n++;
	}
	for(int i=0; i<n; i++){
		if(mp[a[i]]){
			cout<<a[i]<<" "<<mp[a[i]]<<endl;
			mp[a[i]] = 0;
		}
	}
	return 0;
}

