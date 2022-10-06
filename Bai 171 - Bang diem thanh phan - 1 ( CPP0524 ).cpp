#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

struct SinhVien{
	string id;
	string name;
	string id_class;
	double pointA, pointB, pointC; 
}; 

void nhap(struct SinhVien &list_sv){
	cin>>list_sv.id;
	cin.ignore(1);
	getline(cin, list_sv.name);
	cin>>list_sv.id_class;
	cin>>list_sv.pointA>>list_sv.pointB>>list_sv.pointC;	
}

void sap_xep(struct SinhVien list_sv[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(list_sv[i].id > list_sv[j].id)
				swap(list_sv[i], list_sv[j]);
}

void in_ds(struct SinhVien list_sv[], int n){
	for(int i=0; i<n; i++){
		cout<<i+1<<' '
			<<list_sv[i].id<<' '
			<<list_sv[i].name<<' '
			<<list_sv[i].id_class<<' '
			<<fixed<<setprecision(1)
			<<list_sv[i].pointA<<' '
			<<list_sv[i].pointB<<' '
			<<list_sv[i].pointC<<endl;
	}
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

