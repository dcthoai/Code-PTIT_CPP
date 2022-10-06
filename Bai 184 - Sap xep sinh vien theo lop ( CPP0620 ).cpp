#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

class students{
	private :
		string code;
		string name;
		string class_code;
		string email;
	public :
		friend istream &operator >> (istream &in, students &sv);
		friend ostream &operator << (ostream &out, students sv);
		string get_code();
		string get_class_code();
};

istream &operator >> (istream &in, students &sv){
	in>>sv.code;
	cin.ignore(1, '\n');
	getline(cin, sv.name);
	in>>sv.class_code;
	in>>sv.email;
	return in;
}

string students::get_code(){
	return code;
}

string students::get_class_code(){
	return class_code;
}

bool cmp(students &sv1, students &sv2){
	if(sv1.get_class_code() == sv2.get_class_code())
		return sv1.get_code() < sv2.get_code();
	else
		return sv1.get_class_code() < sv2.get_class_code();
}

ostream &operator << (ostream &out, students sv){
	cout<<sv.code<<' '
		<<sv.name<<' '
		<<sv.class_code<<' '
		<<sv.email;
	return out;
}

int main(){
	int n;
	cin>>n;
	students sv[n];
	for(int i=0; i<n; i++)
		cin>>sv[i];
	sort(sv, sv+n, cmp);
	for(int i=0; i<n; i++)
		cout<<sv[i]<<endl;
	return 0;
}

