#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

typedef struct{
	int tu;
	int mau;
}PhanSo;

void process(PhanSo A, PhanSo B){
	long long tuso, mauso;
	long long UC1 = __gcd(A.mau, B.mau);
	mauso = (A.mau*B.mau)/UC1;
	tuso = (mauso/A.mau)*A.tu + (mauso/B.mau)*B.tu;
	tuso*=tuso;
	mauso*=mauso;
	long long UC2 = __gcd(tuso, mauso);
	tuso/=UC2;
	mauso/=UC2;
	cout<<tuso<<"/"<<mauso<<" ";
	long long tuso1 = tuso*A.tu*B.tu;
	long long mauso1 = mauso*A.mau*B.mau;
	long long UC3 = __gcd(tuso1, mauso1);
	cout<<tuso1/UC3<<"/"<<mauso1/UC3<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
