#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string id = "B20DCCN";
	int id_int;
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
		ds[i].id_int = i+1;
	} 
} 

void chuan_hoa_ten(string s){
	string token, str;
	stringstream ss(s);
	while(ss>>token){
		str = token;
		str[0] = toupper(str[0]);
		for(int i=1; i<str.size(); i++)
			str[i] = tolower(str[i]);
		cout<<str<<' ';
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

void sapxep(struct SinhVien ds[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(ds[i].GPA < ds[j].GPA)
				swap(ds[i], ds[j]);
}

void in(struct SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cout<<ds[i].id<<setfill('0')<<setw(3)<<ds[i].id_int<<' ';
		chuan_hoa_ten(ds[i].name);
		cout<<ds[i].masv<<' ';
		chuan_hoa(ds[i].birth);
		cout<<fixed<<setprecision(2)<<ds[i].GPA<<endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
