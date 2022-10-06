#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

struct Sinhvien{
	string id;
	string name;
	string id_class;
	float pointA, pointB, pointC; 
}; 

void import_Sinhvien(struct Sinhvien list_sv[], int n){
	for(int i=0; i<n; i++){
		cin>>list_sv[i].id;
		cin.ignore(1, '\n');
		getline(cin, list_sv[i].name);
		cin>>list_sv[i].id_class;
		cin>>list_sv[i].pointA
		   >>list_sv[i].pointB
		   >>list_sv[i].pointC;
	}
}

void sort_list(struct Sinhvien list_sv[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(list_sv[i].name > list_sv[j].name)
				swap(list_sv[i], list_sv[j]);
}

void print_list(struct Sinhvien list_sv[], int n){
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
	cin>>n;
	struct Sinhvien list_sv[n];	
	import_Sinhvien(list_sv, n);
	sort_list(list_sv, n);
	print_list(list_sv, n);
	return 0;
}
