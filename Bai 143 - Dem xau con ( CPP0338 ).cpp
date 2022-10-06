#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int k, ans=0;
	    cin>>k;
	    for(int i=0; i<=s.size()-k; i++){
	    	set<char> m;
	        for(int j=i; j<s.size(); j++){
	            m.insert(s[j]);
	            if(m.size()==k)
	                ans++;
	            if(m.size()>k)
	            	break;
	        }
	    }
	    cout<<ans<<endl;
	}
  	return 0;
}
