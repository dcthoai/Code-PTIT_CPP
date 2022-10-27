#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream input("DATA.in");
	int m, n;
	input>>m>>n;
	int x;
	set<int> a, b;
	for(int i=0; i<m; i++){
		input>>x;
		a.insert(x);
	}
	for(int i=0; i<n; i++){
		input>>x;
		b.insert(x);
	}
	input.close();
	for(int i : a)
		if(b.count(i))
			cout<<i<<' ';
	return 0;
}

