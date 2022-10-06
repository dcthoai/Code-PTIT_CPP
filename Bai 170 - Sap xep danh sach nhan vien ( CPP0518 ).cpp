#include<iostream>
#include<sstream>
#include<cstring>
#include<iomanip>

using namespace std;

struct NhanVien{
	int code_nv;
	string name_nv;
	string sex_nv;
	string birth_nv;
	string address_nv;
	string tax_code_nv;
	string date_contract_nv; 
	string age_nv; 
};

void nhap(struct NhanVien &nv){
	cin.ignore(1);
	getline(cin, nv.name_nv);
	cin>>nv.sex_nv;
	cin>>nv.birth_nv;
	cin.ignore(1);
	getline(cin, nv.address_nv);
	cin>>nv.tax_code_nv;
	cin>>nv.date_contract_nv;
	int cnt = 0;
	string token, s = nv.birth_nv;
	stringstream ss(s);
	while(getline(ss, token, '/')){
		if(cnt%2==0)
			nv.age_nv = token + nv.age_nv;
		else
			nv.age_nv += token;
		cnt++;
	}
}

void sapxep(struct NhanVien nv[], int n){
	for(int i=0; i<n; i++)
		nv[i].code_nv = i+1;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(nv[i].age_nv > nv[j].age_nv)
				swap(nv[i], nv[j]);
		}
	} 
} 

void inds(struct NhanVien nv[], int n){
	for(int i=0; i<n; i++){
		cout<<setfill('0')<<setw(5)<<nv[i].code_nv<<' ';
		cout<<nv[i].name_nv<<' '
			<<nv[i].sex_nv<<' '
			<<nv[i].birth_nv<<' '
			<<nv[i].address_nv<<' '
			<<nv[i].tax_code_nv<<' '
			<<nv[i].date_contract_nv<<endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
