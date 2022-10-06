#include<bits/stdc++.h>

using namespace std;

int id_nv = 1;

class NhanVien{
	private :
		string name;
		string sex;
		string birth;
		string address;
		string tax_code;
		string date_contract;
		int code;
	public :
		friend istream &operator >> (istream &in, NhanVien &nv);
		friend ostream &operator << (ostream &out, NhanVien nv);
};

istream &operator >> (istream &in, NhanVien &nv){
	nv.code = id_nv;
	id_nv++;
	cin.ignore(1, '\n');
	getline(cin, nv.name);
	in>>nv.sex;
	in>>nv.birth;
	cin.ignore(1, '\n');
	getline(cin, nv.address);
	in>>nv.tax_code;
	in>>nv.date_contract;
	return in;
}

ostream &operator << (ostream &out, NhanVien nv){
	cout<<setfill('0')<<setw(5)<<nv.code<<' ';
	cout<<nv.name<<' '
		<<nv.sex<<' '
		<<nv.birth<<' '
		<<nv.address<<' '
		<<nv.tax_code<<' '
		<<nv.date_contract<<endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
