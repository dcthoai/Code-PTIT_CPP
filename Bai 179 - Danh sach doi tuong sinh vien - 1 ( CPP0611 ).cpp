#include<bits/stdc++.h>
using namespace std;

int in_id = 1;

class SinhVien{
	private :
		int id;
		string name;
		string birth;
		string class_sv;
		float GPA;
	public :
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

istream &operator >> (istream &in, SinhVien &a){
    cin.ignore();
    getline(in, a.name);
	in>>a.class_sv;
	in>>a.birth;
	in>>a.GPA;
	a.id = in_id;
	in_id++;
	return in;
}

SinhVien::SinhVien(){	
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

ostream &operator << (ostream &out, SinhVien a){
	cout<<"B20DCCN"<<setfill('0')<<setw(3)<<a.id<<' ';
	cout<<a.name<<' ';
	cout<<a.class_sv<<' ';
	chuan_hoa(a.birth);
	cout<<fixed<<setprecision(2)<<a.GPA<<endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
