#include<bits/stdc++.h>
using namespace std;

class PhanSo{
	private :
		long long a, b;
	public :
		PhanSo(int, int);
		void rutgon();
		friend istream& operator >> (istream &in, PhanSo &p);
		friend ostream& operator << (ostream &out, PhanSo p);
};

istream& operator >> (istream &in, PhanSo &p){
	in>>p.a>>p.b;
	return in;
}

ostream& operator << (ostream &out, PhanSo p){
	cout<<p.a<<"/"<<p.b;
	return out;
}

PhanSo::PhanSo(int a, int b){
	
}

void PhanSo::rutgon(){
	long long tmp = __gcd(a, b);
	a = a/tmp;
	b = b/tmp;
}


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
