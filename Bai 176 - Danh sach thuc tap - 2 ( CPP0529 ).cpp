#include<bits/stdc++.h>
using namespace std;

typedef struct{
	int id;
	string code;
	string name;
	string class_code;
	string email;
	string company;
}Students;

void import_list_student(Students sv[], int n){
	for(int i=0; i<n; i++){
		sv[i].id = i+1;
		cin>>sv[i].code;
		cin.ignore(1, '\n');
		getline(cin, sv[i].name);
		cin >>sv[i].class_code
			>>sv[i].email
			>>sv[i].company;
	}
}

bool cmp(Students &a, Students &b){
	return a.code < b.code;
}

void edit_name_student(string s){
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

void print_student(Students sv){
	cout<<sv.id<<' '
		<<sv.code<<' ';
	edit_name_student(sv.name);
	cout<<sv.class_code<<' '
		<<sv.email<<' '
		<<sv.company<<endl;
}

int main(){
	int n;
	cin>>n;
	Students list_sv[n];
	import_list_student(list_sv, n);
	sort(list_sv, list_sv + n, cmp);
	int t;
	cin>>t;
	while(t--){
		string name_company;
		cin>>name_company;
		for(int i=0; i<n; i++)
			if(list_sv[i].company == name_company)
				print_student(list_sv[i]);
	}
	return 0;
}

