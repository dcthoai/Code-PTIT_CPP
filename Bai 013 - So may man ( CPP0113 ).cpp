#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		string number;
		cin>>number;
		int n = number.size();
		if(number[n-1]=='6' && number[n-2]=='8')
			cout<<'1'<<endl;
		else
			cout<<'0'<<endl;
	}
	return 0;
}

