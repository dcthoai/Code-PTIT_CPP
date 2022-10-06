#include<bits/stdc++.h>

using namespace std;

int id = 1;
class Teacher{
	private:
		int code;
		string name;
		string subject;
		string subject_code;
	public :
		friend istream &operator >> (istream &in, Teacher &gv);
		friend ostream &operator << (ostream &out, Teacher gv);
		string get_subject_code();
};

string edit_subject_name(string s){
	string subject = "", token, str[6];
	int n=0;
	stringstream ss(s);
	while(ss>>token)
		str[n++] = token;
	for(int i=0; i<n; i++)
		subject += str[i].substr(0, 1);
	return subject;
} 

istream &operator >> (istream &in, Teacher &gv){
	gv.code = id; 
	id++;
	getline(cin, gv.name);
	getline(cin, gv.subject);
	for(int i=0; i<gv.subject.size(); i++)
		gv.subject[i] = toupper(gv.subject[i]);
	gv.subject_code = edit_subject_name(gv.subject);
	return in;
}

string Teacher::get_subject_code(){
	return subject_code;
}

ostream &operator << (ostream &out, Teacher gv){
	cout<<"GV"
		<<setfill('0')<<setw(2)<<gv.code<<' '
		<<gv.name<<' '
		<<gv.subject_code<<endl;
	return out;
}

int main(){
	int n;
	cin>>n;
	cin.ignore();
	Teacher list_teachers[n];
	for(int i=0; i<n; i++)
		cin>>list_teachers[i];
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string subject;
		getline(cin, subject);
		for(int i=0; i<subject.size(); i++)
			subject[i] = toupper(subject[i]);
		subject = edit_subject_name(subject);
		cout<<"DANH SACH GIANG VIEN BO MON "<<subject<<":"<<endl;
		for(int i=0; i<n; i++){
			if(subject == list_teachers[i].get_subject_code())
				cout<<list_teachers[i];
		}
	}
	return 0;
}

