#include<bits/stdc++.h>
using namespace std;

class PhanSo{
	private :
		long long a, b;
	public :
		PhanSo(int, int);
		friend istream& operator >> (istream &in, PhanSo &p);
		friend ostream& operator << (ostream &out, PhanSo p);
		friend PhanSo operator + (PhanSo p, PhanSo q);
};

istream& operator >> (istream &in, PhanSo &p){
	in>>p.a>>p.b;
	return in;
}

PhanSo operator + (PhanSo p, PhanSo q){
	PhanSo sum(1, 1);
	long long tmp = __gcd(p.b, q.b);
	long long mau_so = p.b*q.b/tmp;
	long long tu_so = p.a*(mau_so/p.b) + q.a*(mau_so/q.b);
	long long tmp2 = __gcd(tu_so, mau_so);
	sum.a = tu_so/tmp2;
	sum.b = mau_so/tmp2;
	return sum;
}

ostream& operator << (ostream &out, PhanSo sum){
	cout<<sum.a<<"/"<<sum.b;
	return out;
}

PhanSo::PhanSo(int a, int b){
	
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

