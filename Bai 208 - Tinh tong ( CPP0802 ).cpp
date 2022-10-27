#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int max = INT_MAX;
	long long sum = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] < '0' || s[i] > '9')
			return 0;
		else
			sum = sum*10 + s[i] - '0';
		if(sum > max)
			return 0;
	}
	return sum;
}

int main(){
	ifstream input("DATA.in");
	string s;
	long long sum = 0;
	while(input>>s){
		sum += check(s);
	}
	cout<<sum;
	return 0;
}

