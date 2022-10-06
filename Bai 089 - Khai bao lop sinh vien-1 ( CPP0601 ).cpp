#include<iostream>
#include<sstream>
#include<cstring>
#include<iomanip>
using namespace std;

class SinhVien{
	private:
		string masv = "B20DCCN001";
		string name, id, birth;
		double gpa;
	public:
		void nhap();
		void xuat();
}; 

void chuan_hoa(string s){
    int i=0;
    stringstream ss(s);
    string dd[3], token;
    while(getline(ss, token, '/'))
        dd[i++] = token;
    cout<<setfill('0')
        <<setw(2)<<dd[0]<<'/'
        <<setw(2)<<dd[1]<<'/'
        <<setw(4)<<dd[2]<<' ';
}

void SinhVien::nhap(){
	getline(cin, name);
	cin>>id>>birth>>gpa;
}

void SinhVien::xuat(){
	cout<<masv<<' '
		<<name<<' '
		<<id<<' ';
	chuan_hoa(birth);
	cout<<fixed<<setprecision(2)<<gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
