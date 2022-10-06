#include<bits/stdc++.h>
using namespace std;

class Students{
	private:
		string code;
		string name;
		string class_code;
		string email;
	public :
		friend istream &operator >> (istream &in, Students &sv);
		friend ostream &operator << (ostream &out, Students sv);
		string get_class_code();
}; 

istream &operator >> (istream &in, Students &sv){
	in>>sv.code;
	in.ignore(1, '\n');
	getline(cin, sv.name);
	in>>sv.class_code;
	in>>sv.email;
	return in;
}

string Students::get_class_code(){
	return class_code;
}

ostream &operator << (ostream &out, Students sv){
	cout<<sv.code<<' '
		<<sv.name<<' '
		<<sv.class_code<<' '
		<<sv.email<<endl;
	return out;
}

int main(){
	int n;
	cin>>n;
	Students list_student[n];
	for(int i=0; i<n; i++)
		cin>>list_student[i];
	int t;
	cin>>t;
	while(t--){
		string name_class;
		cin>>name_class;
		cout<<"DANH SACH SINH VIEN LOP "<<name_class<<':'<<endl;
		for(int i=0; i<n; i++)
			if(name_class == list_student[i].get_class_code())
				cout<<list_student[i];
	}
	return 0;
}

