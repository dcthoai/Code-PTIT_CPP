#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

struct PhanSo{
	long a, b;
};

void nhap(struct PhanSo &p){
	cin>>p.a>>p.b;
}

struct PhanSo tong(struct PhanSo p, struct PhanSo q){
	struct PhanSo c;
	long long mau_so = p.b*q.b/__gcd(p.b, q.b);
	p.a = p.a*(mau_so/p.b);
	q.a = q.a*(mau_so/q.b);
	long long tu_so = p.a+q.a;
	long long rut_gon = __gcd(tu_so, mau_so);
	c.a = tu_so/rut_gon;
	c.b = mau_so/rut_gon;
	return c; 
}

void in(struct PhanSo p){
	cout<<p.a<<'/'<<p.b;
}

int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
