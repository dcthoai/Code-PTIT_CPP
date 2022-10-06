#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int check(string s){
	for(int i=1; i<s.size(); i++)
		if(s[i] < s[i-1])
			return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string num;
		cin>>num;
		if(check(num))
			cout<<"-1"<<endl;
		else{
			int n = num.size();
			for(int i=n-2; i>=0; i--){
				if(num[i] > num[i+1]){
					int max = 0, index;
					for(int j=i+1; j<n; j++){
						if(num[j]>max && num[j]<num[i]){
							max = num[j];
							index = j;
						}
					}
					swap(num[i], num[index]);
					break;
				}
			}
			cout<<num<<endl;
		}
	}
	return 0;
}

