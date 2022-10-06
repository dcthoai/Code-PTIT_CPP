#include<bits/stdc++.h>
using namespace std;

class Students{
	private:
		string code;
		string name;
		string class_code;
		string email;
		string majoys; 
	public :
		friend istream &operator >> (istream &in, Students &sv);
		friend ostream &operator << (ostream &out, Students sv);
		string get_class_code();
		string get_majoys(); 
}; 

string edit_name_majoys(string s){
	string majoy = s.substr(3, 4);
	return majoy;	 
} 

istream &operator >> (istream &in, Students &sv){
	in>>sv.code;
	in.ignore(1, '\n');
	getline(cin, sv.name);
	in>>sv.class_code;
	in>>sv.email;
	sv.majoys = edit_name_majoys(sv.code); 
	return in;
}

string Students::get_class_code(){
	return class_code;
}

string Students::get_majoys(){
	return majoys; 
} 

ostream &operator << (ostream &out, Students sv){
	cout<<sv.code<<' '
		<<sv.name<<' '
		<<sv.class_code<<' '
		<<sv.email<<endl;
	return out;
}

string edit_majoys_code(string s){
	string majoy = "DC", token, str[6];
	int i=0;
	stringstream ss(s);
	while(ss>>token)
		str[i++] = token;
	majoy += str[0].substr(0, 1);
	majoy += str[1].substr(0, 1);
	return majoy;
} 

int check_class_code(string class_code){
	if(class_code[0] == 'E')
		return 0;
	return 1;
}

int main(){
	int n;
	cin>>n;
	Students list_student[n];
	for(int i=0; i<n; i++)
		cin>>list_student[i];
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string name_majoys;
		getline(cin, name_majoys);
		for(int i=0; i<name_majoys.size(); i++)
		    name_majoys[i] = toupper(name_majoys[i]);
		cout<<"DANH SACH SINH VIEN NGANH "<<name_majoys<<':'<<endl;
		name_majoys = edit_majoys_code(name_majoys); 
		for(int i=0; i<n; i++){
			if(name_majoys == list_student[i].get_majoys()){
				if(name_majoys == "DCCN" || name_majoys == "DCAT"){
					if(check_class_code(list_student[i].get_class_code()))
						cout<<list_student[i];
				}else
					cout<<list_student[i];
			}
		}
	}
	return 0;
}
