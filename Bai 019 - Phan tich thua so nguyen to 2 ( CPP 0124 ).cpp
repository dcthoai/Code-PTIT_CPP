#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for(long i=2; i<=sqrt(n); i++){
		int cnt = 0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt)
			cout<<i<<' '<<cnt<<endl;
	}
	if(n>1)
		cout<<n<<' '<<1;
	return 0;
}

