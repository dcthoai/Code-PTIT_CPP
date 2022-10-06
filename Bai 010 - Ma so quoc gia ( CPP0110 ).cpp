#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string code;
		cin>>code;
		for(int i=0; i<code.size(); i++){
			if(code[i]=='0')
				if(code[i+1]=='8')
					if(code[i+2]=='4'){
						for(int j=0; j<i; j++)
							cout<<code[j];
						for(int j=i+3; j<code.size(); j++)
							cout<<code[j];
					}
		}
		cout<<endl;
	}
	return 0;
}

