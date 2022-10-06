#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct ThiSinh{
	string name;
	string date;
	double a, b, c;
};

void nhap(struct ThiSinh &A){
	getline(cin, A.name);
	cin>>A.date;
	cin>>A.a>>A.b>>A.c;
}

void in(struct ThiSinh A){
	cout<<A.name<<' '<<A.date<<' ';
	double point = A.a + A.b + A.c;
	cout<<fixed<<setprecision(1)<<point;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

