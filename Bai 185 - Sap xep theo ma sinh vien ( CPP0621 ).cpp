#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
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

bool cmp(students &sv1, students &sv2){
	return sv1.get_code() < sv2.get_code();
}

ostream &operator << (ostream &out, students sv){
	cout<<sv.code<<' '
		<<sv.name<<' '
		<<sv.class_code<<' '
		<<sv.email;
	return out;
}

int main(){
	vector<students> sv;
	int n = 0;
	students a;
	while(cin>>a){
		sv.push_back(a);
		n++;
	}
	sort(sv.begin(), sv.end(), cmp);
	for(int i=0; i<n; i++)
		cout<<sv[i]<<endl;
	return 0;
}

