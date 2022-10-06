#include<iostream>
#include<set>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		multiset<int> s;
		for(int &i : a)
			cin>>i;
		for(int i=0; i<k; i++)
			s.insert(a[i]);
		for(int i=k; i<n; i++){
			cout<<*s.rbegin()<<' ';
			s.insert(a[i]);
			s.erase(s.find(a[i-k]));
		}
		cout<<*s.rbegin()<<endl;
	}
	return 0;
}

