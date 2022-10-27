#include<bits/stdc++.h>

using namespace std;

//int check(string s){
//	int n = s.size();
//	int x = 0, y = 0;
//	for(int i=0; i<n; i++)
//		x += s[i] - '0';
//	if(n<3){
//		for(int i=0; i<n; i++)
//			y = y*10 + s[i] - '0';
//		if(y%8 == 0 && x%3 != 0)
//			return 1;
//		return 0;
//	}else{
//		for(int i=n-3; i<n; i++)
//			y = y*10 + s[i] - '0';
//		if(y%8 == 0 && x%3 != 0)
//			return 1;
//		return 0;
//	}
//}
//
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		string s;
//		cin >> s;
//		int n = s.size(), count = 0;
//		for(int i=1; i<=n; i++){
//			for(int j=0; j<=n-i; j++){
//				string ss = s.substr(j, i);
//				if(check(ss))
//					count++;
//			}
//		}
//		cout<<count<<endl;
//	}
//
//	return 0;
//}


int Count(string s,int n{
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		int x = 0;
		for(int j=i; j<s.size(); j++){
			x = (x * 10 + s[j] - '0') % n;
			if(!x) 
				++cnt;
		}
	}
	return cnt;
} 

int main(){ 
	int t;
	cin >> t;
    string s;
	while(t--){
		cin >> s;
		cout << Count(s, 8) - Count(s, 24) << endl;
	}
    return 0;
}
