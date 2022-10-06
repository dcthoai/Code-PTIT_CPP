#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

class companys{
	private :
		string company_name;
		string company_code;
		int amount_student;
	public :
		friend istream &operator >> (istream &in, companys &company);
		friend ostream &operator << (ostream &out, companys company); 
		int get_amount_student();
		string get_company_code();
}; 

istream &operator >> (istream &in, companys &company){
	in>>company.company_code;
	cin.ignore(1, '\n');
	getline(cin, company.company_name);
	in>>company.amount_student; 
	return in; 
}

int companys::get_amount_student(){
	return amount_student;
}

string companys::get_company_code(){
	return company_code;
}

bool cmp(companys &companyA, companys &companyB){
	if(companyA.get_amount_student() == companyB.get_amount_student())
		return companyA.get_company_code() < companyB.get_company_code();
	return companyA.get_amount_student() > companyB.get_amount_student();
}

ostream &operator << (ostream &out, companys company){
	cout<<company.company_code<<' '
		<<company.company_name<<' '
		<<company.amount_student;
	return out; 
}

int main(){
	int n;
	cin>>n;
	companys company[n];
	for(int i=0; i<n; i++)
		cin>>company[i];
	sort(company, company+n, cmp);
	for(int i=0; i<n; i++)
		cout<<company[i]<<endl; 
	return 0;
}

