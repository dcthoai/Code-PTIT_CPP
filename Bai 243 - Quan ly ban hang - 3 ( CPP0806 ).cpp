#include<bits/stdc++.h>
using namespace std;

int id_customer = 1, id_item = 1, id_bill = 1;

class Customers{
	private:
		int customer_code;
		string customer_name;
		string sex;
		string birth;
		string address;
	public :
		friend ifstream &operator >> (ifstream &in, Customers &customer);
		friend ostream &operator << (ostream &out, Customers customer);
		string get_customer_name(){
			return customer_name;
		};
		string get_address(){
			return address;
		};
};

class Items{
	private:
		int item_code;
		string name_item;
		string price_unit;
		long long cost_price;
		long long price;
	public :
		friend ifstream &operator >> (ifstream &in, Items &item);
		friend ostream &operator << (ostream &out, Items item);
		string get_name_item(){
			return name_item;
		};
		string get_price_unit(){
			return price_unit;
		};
		long long get_cost_price(){
			return cost_price;
		};
		long long get_price(){
			return price;
		};
};

class Receipt{
	private:
		int code_bill;
		int customer_code;
		int item_code;
		int amount;
	public :
		friend ifstream &operator >> (ifstream &in, Receipt &bill);
		friend ostream &operator << (ostream &out, Receipt bill);
};

map <int, Customers> customers;
map <int, Items> items;

ifstream &operator >> (ifstream &in, Customers &customer){
	customer.customer_code = id_customer;
	id_customer++;
	getline(in, customer.customer_name);
	getline(in, customer.sex);
	getline(in, customer.birth);
	getline(in, customer.address);
	customers[customer.customer_code] = customer;
	return in;
}

ifstream &operator >> (ifstream &in, Items &item){
	item.item_code = id_item;
	id_item++;
	char string_tmp[5];
	getline(in, item.name_item);
	in>>item.price_unit>>item.cost_price>>item.price;
	in.getline(string_tmp, 3);
	items[item.item_code] = item;
	return in;
}

int edit_code(string s){
	int n = 0;
	for(int i=0; i<s.size(); i++)
		while(s[i] > '0' && s[i] <= '9'){
			n = n*10 + s[i] - '0';
			i++;
		}
	return n;
}

ifstream &operator >> (ifstream &in, Receipt &bill){
	bill.code_bill = id_bill;
	id_bill++;
	string tmp;
	in>>tmp;
	bill.customer_code = edit_code(tmp);
	in>>tmp;
	bill.item_code = edit_code(tmp);
	in>>bill.amount;
	return in;
}

ostream &operator << (ostream &out, Receipt bill){
	out<<"HD"<<setfill('0')<<setw(3)<<bill.code_bill<<' ';
	out<<customers[bill.customer_code].get_customer_name()<<' '
		<<customers[bill.customer_code].get_address()<<' '
		<<items[bill.item_code].get_name_item()<<' '
		<<items[bill.item_code].get_price_unit()<<' '
		<<items[bill.item_code].get_cost_price()<<' '
		<<items[bill.item_code].get_price()<<' '
		<<bill.amount<<' '
		<<bill.amount*items[bill.item_code].get_price();
	return out;
}

int main(){
	Customers list_customer[25];
	Items list_items[45];
	Receipt list_bill[105];
	int N, M, K;
    char string_tmp[5];
    ifstream file_KH("D:\\KH.in");
    ifstream file_MH("D:\\MH.in");
    ifstream file_HD("D:\\HD.in");
    
    file_KH>>N;
    file_KH.getline(string_tmp, 3);
    for(int i=0; i<N; i++)
    	file_KH>>list_customer[i];
		
	file_MH>>M;
    file_MH.getline(string_tmp, 3);
    for(int i=0; i<M; i++)
    	file_MH>>list_items[i];
		
	file_HD>>K;
	for(int i=0; i<K; i++)
		file_HD>>list_bill[i];
	for(int i=0; i<K; i++)
		cout<<list_bill[i]<<endl;
		
	file_KH.close();
    file_MH.close();
	file_HD.close();
	return 0;
}

