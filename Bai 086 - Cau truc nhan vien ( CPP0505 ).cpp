#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct NhanVien{
	string mnv = "00001";
	string name, sex, birthday, andress;
	string ma_thue, ngay_ki_hd;
};

void nhap(struct NhanVien &a){
	getline(cin, a.name);
	cin>>a.sex>>a.birthday;
	cin.ignore(1);
	getline(cin, a.andress);
	cin>>a.ma_thue>>a.ngay_ki_hd;
}

void in(struct NhanVien a){
	cout<<a.mnv<<' '<<a.name<<' '<<a.sex<<' '
		<<a.birthday<<' '<<a.andress<<' '
		<<a.ma_thue<<' '<<a.ngay_ki_hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

