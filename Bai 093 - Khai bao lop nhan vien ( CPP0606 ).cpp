#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class NhanVien{
	private : 
		string id = "00001";
		string name, sex, birth, andress, ms_thue, date;
	public :
		void nhap();
		void xuat();
};

void NhanVien::nhap(){
	getline(cin, name);
	cin>>sex;
	cin>>birth;
	cin.ignore();
	getline(cin, andress);
	cin>>ms_thue>>date;
}

void NhanVien::xuat(){
	cout<<id<<" "
		<<name<<" "
		<<sex<<" "
		<<birth<<" "
		<<andress<<" "
		<<ms_thue<<" "
		<<date;
}

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
