#include<bits/stdc++.h>
using namespace std;

class Students{
	private:
		string code;
		string name;
		string class_code;
		string email;
		string grade; 
	public :
		friend istream &operator >> (istream &in, Students &sv);
		friend ostream &operator << (ostream &out, Students sv);
		string get_grade();
}; 

string grade_student(string s){
	string grade = "20";
	string token = s.substr(1, 2); 
	grade += token; 
	return grade;
}

istream &operator >> (istream &in, Students &sv){
	in>>sv.code;
	in.ignore(1, '\n');
	getline(cin, sv.name);
	in>>sv.class_code;
	sv.grade = grade_student(sv.class_code);
	in>>sv.email;
	return in;
}

string Students::get_grade(){
	return grade;
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
		string name_grade;
		cin>>name_grade;
		cout<<"DANH SACH SINH VIEN KHOA "<<name_grade<<':'<<endl;
		for(int i=0; i<n; i++)
			if(name_grade == list_student[i].get_grade())
				cout<<list_student[i];
	}
	return 0;
}

