#include<iostream>
#include<iomanip>
#include<sstream>
#include<cstring>
#include<cstring>
using namespace std;

class SinhVien{
	private:
		string msv = "B20DCCN001";
		string name, ma_lop, birth;
		double gpa;
	public:
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

istream& operator >> (istream &in, SinhVien &a){
	getline(in, a.name);
	in>>a.ma_lop;
	in>>a.birth;
	in>>a.gpa;
	return in;
}

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

void chuan_hoa_2(string s){
	int n=0;
	stringstream ss(s);
	string name[10], token;
	while(ss>>token)
		name[n++] = token;
	for(int i=0; i<n; i++){
		name[i][0] = toupper(name[i][0]);
		for(int j=1; j<name[i].size(); j++)
			name[i][j] = tolower(name[i][j]);
		cout<<name[i]<<" ";
	}
}

ostream& operator << (ostream &out, SinhVien a){
	cout<<a.msv<<" ";
	chuan_hoa_2(a.name);
	cout<<a.ma_lop<<" ";
	chuan_hoa(a.birth);
	cout<<fixed<<setprecision(2)<<a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
