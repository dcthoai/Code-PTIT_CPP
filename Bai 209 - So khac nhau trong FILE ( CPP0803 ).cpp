#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream input("DATA.in");
	int tmp;
	map<int, int> number;
	while(input>>tmp){
		number[tmp]++;
	}
	for(auto i : number)
		cout<<i.first<<' '<<i.second<<'\n';
	input.close();
	return 0;
}

