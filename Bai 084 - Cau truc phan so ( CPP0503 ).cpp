#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct PhanSo{
	long long a, b;
}; 

void nhap(struct PhanSo &p){
	cin>>p.a>>p.b;
}

void rutgon(struct PhanSo &p){
	long long x = __gcd(p.a, p.b);
	p.a/=x;
	p.b/=x;
}

void in(struct PhanSo p){
	cout<<p.a<<'/'<<p.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
