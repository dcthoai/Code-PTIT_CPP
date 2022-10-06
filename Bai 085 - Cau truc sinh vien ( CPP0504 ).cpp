#include<iostream>
#include<iomanip>
#include<cstring>
#include<sstream>
using namespace std;

struct SinhVien {
    string name;
    string msv = "B20DCCN001";
    string mlop;
    string birthday;
    float GPA;
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

void nhap(struct SinhVien &a) {
    getline(cin, a.name);
    cin>>a.mlop;
    cin>>a.birthday;
    cin>>a.GPA;
}

void in(struct SinhVien a) {
    cout<<a.msv<<' '<<a.name<<' '<<a.mlop<<' ';
    chuan_hoa(a.birthday);
    cout<<fixed<<setprecision(2)<<a.GPA;
}

int main() {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
