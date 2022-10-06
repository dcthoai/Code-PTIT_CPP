#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], b[n];
		for(int &i : a)
			cin>>i;
		for(int &i : b)
			cin>>i;
		int cnt = 1;
		for(int i=0; i<n; i++){
			int s1=0, s2=0, tmp;
			for(int j=i; j<n; j++){
				s1+=a[j];
				s2+=b[j];
				if(s1==s2)
					tmp = j-i+1;
			}
			if(cnt<tmp)
				cnt = tmp;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
