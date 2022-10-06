#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a.length() > b.length();
}

int main(){
	int n; 
	cin>>n;
	vector<string> a(n);
	for(auto &i : a) 
		cin >> i;
	sort(a.begin(), a.end(), cmp);
	long long ans = 0;
	for(int i=0; i<n; i++){
	    for(int j=i+1; j<n; j++){
	        if(a[i] == a[j]){
	            ans += 2;
	            continue;
	        }
	        if(a[i].find(a[j]) != string::npos)
	            ans++;
	    }
	}
	cout<<ans<<endl;
	return 0;
}
