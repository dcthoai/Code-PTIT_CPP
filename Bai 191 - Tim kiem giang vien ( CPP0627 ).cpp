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
		string get_name_teacher();
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

string Teacher::get_name_teacher(){
	return name;
}

int find_key_word(string s, string key){
	for(int i=0; i<s.length(); i++)
		s[i] = tolower(s[i]);
	if(s.find(key) < s.length())
		return 1;
	return 0;
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
		string key_word;
		getline(cin, key_word);
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<key_word<<":"<<endl;
		for(int i=0; i<key_word.size(); i++)
			key_word[i] = tolower(key_word[i]);
		for(int i=0; i<n; i++){
			if(find_key_word(list_teachers[i].get_name_teacher(), key_word))
				cout<<list_teachers[i];
		}
	}
	return 0;
}

