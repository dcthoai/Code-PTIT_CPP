#include<bits/stdc++.h>
using namespace std;

int id_customer = 1, id_item = 1, id_bill = 1;

class Customers{
	private:
		string customer_code = "KH";
		string customer_name;
		string sex;
		string birth;
		string address;
	public :
		friend ifstream &operator >> (ifstream &in, Customers &customer);
		string get_customer_name(){
			return customer_name;
		};
		string get_address(){
			return address;
		};
};

class Items{
	private:
		string item_code = "MH";
		string name_item;
		string price_unit;
		long long cost_price;
		long long price;
	public :
		friend ifstream &operator >> (ifstream &in, Items &item);
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

map <string, Customers> customers;
map <string, Items> items;

class Receipt{
	private:
		int code_bill;
		string customer_code;
		string item_code;
		int amount;
	public :
		friend ifstream &operator >> (ifstream &in, Receipt &bill);
		friend ostream &operator << (ostream &out, Receipt bill);
};

ifstream &operator >> (ifstream &in, Customers &customer){
	if(id_customer < 10)
		customer.customer_code += "00" + to_string(id_customer);
	else
		customer.customer_code += "0" + to_string(id_customer);
	id_customer++;
	fflush(stdin);
	getline(in, customer.customer_name);
	in>>customer.sex;
	in>>customer.birth;
	getline(in, customer.address);
	customers[customer.customer_code] = customer;
	return in;
}

ifstream &operator >> (ifstream &in, Items &item){
	if(id_item < 10)
		item.item_code += "00" + to_string(id_item);
	else
		item.item_code += "0" + to_string(id_item);
	id_item++;
	fflush(stdin);
	getline(in, item.name_item);
	getline(in, item.price_unit);
	in	>>item.cost_price
	  	>>item.price;
	items[item.item_code] = item;
	return in;
}

ifstream &operator >> (ifstream &in, Receipt &bill){
	bill.code_bill = id_bill;
	id_bill++;
	in  >>bill.customer_code
		>>bill.item_code
		>>bill.amount;
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
		<<bill.amount*items[bill.item_code].get_price()<<endl;
	return out;
}

int main(){
    Customers list_customers[25];
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
    	file_KH>>list_customers[i];
	
    file_MH>>M;
    file_MH.getline(string_tmp, 3);
    for(int i=0; i<M; i++)
    	file_MH>>list_items[i];
	
    file_HD>>K;
    file_HD.getline(string_tmp, 3);
    for(int i=0; i<K; i++)
    	file_HD>>list_bill[i];

	for(int i=0; i<K; i++)
		cout<<list_bill[i];
	file_KH.close();
    file_MH.close();
	file_HD.close();
    return 0;
}
