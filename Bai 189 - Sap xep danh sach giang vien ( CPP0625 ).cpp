#include<iostream>
#include<sstream>
#include<algorithm>
#include<cstring>
#include<iomanip>
using namespace std;

int id = 1;
class lecturers{
	private :
		string name;
		string full_name;
		string subject;
		string code_gv = "GV";
		int id_gv;
	public :
		friend istream &operator >> (istream &in, lecturers &gv);
		friend ostream &operator << (ostream &out, lecturers gv);
		string get_name();
		int get_id_gv(); 
};

string get__name(string s){
	string token, str;
	stringstream ss(s);
	while(ss>>token)
		str = token;
	return str;
}

string get_subject(string subjects){
	string token, s, str = "";
	stringstream ss(subjects);
	while(ss>>token){
		s = token;
		str += s.substr(0, 1);
	}
	for(int i=0; i<str.size(); i++)
		str[i] = toupper(str[i]);
	return str;
}

istream &operator >> (istream &in, lecturers &gv){
	getline(cin, gv.full_name);
	gv.name = get__name(gv.full_name);
	string subjects;
	getline(cin, subjects);
	gv.subject = get_subject(subjects);
	gv.id_gv = id;
	id++;
	return in;
}

int lecturers::get_id_gv(){
	return id_gv;
}

string lecturers::get_name(){
	return name;
}

bool cmp(lecturers &gv1, lecturers &gv2){
	if(gv1.get_name() == gv2.get_name())
		return gv1.get_id_gv() < gv2.get_id_gv();
	return gv1.get_name() < gv2.get_name();
}

ostream &operator << (ostream &out, lecturers gv){
	cout<<gv.code_gv<<setfill('0')<<setw(2)<<gv.id_gv<<' ';
	cout<<gv.full_name<<' '<<gv.subject;
	return out;
}

int main(){
	int n;
	cin>>n;
	cin.ignore();
	lecturers gv[n];
	for(int i=0; i<n; i++)
		cin>>gv[i];
	sort(gv, gv+n, cmp);
	for(int i=0; i<n; i++)
		cout<<gv[i]<<endl;
	return 0;
}

