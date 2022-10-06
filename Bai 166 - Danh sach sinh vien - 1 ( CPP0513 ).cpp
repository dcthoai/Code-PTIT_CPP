#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string id = "B20DCCN";
	string name;
	string masv;
	string birth;
	float GPA;	
};

void nhap(struct SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cin.ignore(1);
		getline(cin, ds[i].name);
		cin>>ds[i].masv;
		cin>>ds[i].birth; 
		cin>>ds[i].GPA;
	} 
} 

void chuan_hoa(string s){
    int i=0;
    stringstream ss(s);
    string date[3], token;
    while(getline(ss, token, '/'))
        date[i++] = token;
    cout<<setfill('0')
        <<setw(2)<<date[0]<<'/'
        <<setw(2)<<date[1]<<'/'
        <<setw(4)<<date[2]<<' ';
}

void in(struct SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cout<<ds[i].id<<setfill('0')<<setw(3)<<i+1<<' ';
		cout<<ds[i].name<<' '<<ds[i].masv<<' ';
		chuan_hoa(ds[i].birth);
		cout<<fixed<<setprecision(2)<<ds[i].GPA<<endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
