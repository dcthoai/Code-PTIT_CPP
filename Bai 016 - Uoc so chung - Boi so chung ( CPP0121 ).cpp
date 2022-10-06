#include<iostream>
#include<cstring>
using namespace std;

long long GCD(long a, long b){
	while(a*b != 0){
        if(a>b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long a, b;
		cin>>a>>b;
		long UCLN = GCD(a, b);
		long long BCNN = (a*b)/UCLN;
		cout<<BCNN<<' '<<UCLN<<endl;
	}
	return 0;
}
