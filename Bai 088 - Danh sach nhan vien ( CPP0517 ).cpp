#include<iostream>
#include<iomanip>
#include<cstring>
#include<sstream>
using namespace std;

struct NhanVien{
	string name;
	string sex;
	string birthday;
	string andress;
	string ma_thue;
	string ngay_ki_hd;
};

void nhap(struct NhanVien &nv){
	cin.ignore();
	getline(cin, nv.name);
	cin>>nv.sex;
	cin>>nv.birthday;
	cin.ignore();
	getline(cin, nv.andress);
	cin>>nv.ma_thue;
	cin>>nv.ngay_ki_hd;
}

void inds(struct NhanVien nv[], int N) {
	for(int i = 0 ; i<N ; i++) {
		cout<<setfill('0')<<setw(5)<<i+1<<" ";
		cout<<nv[i].name<<" "
			<<nv[i].sex<<" "
			<<nv[i].birthday<<" "
			<<nv[i].andress<<" "
			<<nv[i].ma_thue<<" "
			<<nv[i].ngay_ki_hd<<endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
