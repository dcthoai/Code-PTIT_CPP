#include<bits/stdc++.h>

using namespace std;
int id_sv = 1;

class SinhVien{
	private:
		int id;
		string name, class_sv, birth;
		float GPA;
	public :
		SinhVien();
		friend istream &operator >> (istream &in, SinhVien &sv);
		friend ostream &operator << (ostream &out, SinhVien sv);
};

istream &operator >> (istream &in, SinhVien &sv){
	cin.ignore();
	getline(in, sv.name);
	in>>sv.class_sv>>sv.birth>>sv.GPA;
	sv.id = id_sv;
	id_sv++;
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

ostream &operator << (ostream &out, SinhVien sv){
	cout<<"B20DCCN"<<setfill('0')<<setw(3)<<sv.id<<' ';
	chuan_hoa_2(sv.name);
	cout<<sv.class_sv<<' ';
	chuan_hoa(sv.birth);
	cout<<fixed<<setprecision(2)<<sv.GPA<<endl;
	return out;
}

SinhVien::SinhVien(){
	
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

