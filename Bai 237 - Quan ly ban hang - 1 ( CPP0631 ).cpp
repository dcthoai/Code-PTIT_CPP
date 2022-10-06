#include<bits/stdc++.h>
using namespace std;

int id_customer = 1, id_item = 1, id_bill = 1;

class KhachHang{
	private:
		string customer_code = "KH";
		string customer_name;
		string sex;
		string birth;
		string address;
	public :
		friend istream &operator >> (istream &in, KhachHang &customer);
		string get_customer_name(){
			return customer_name;
		};
		string get_address(){
			return address;
		};
};

class MatHang{
	private:
		string item_code = "MH";
		string name_item;
		string price_unit;
		long long cost_price;
		long long price;
	public :
		friend istream &operator >> (istream &in, MatHang &item);
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

map <string, KhachHang> customers;
map <string, MatHang> items;

class HoaDon{
	private:
		int code_bill;
		string customer_code;
		string item_code;
		int amount;
	public :
		friend istream &operator >> (istream &in, HoaDon &bill);
		friend ostream &operator << (ostream &out, HoaDon bill);
};

istream &operator >> (istream &in, KhachHang &customer){
	if(id_customer < 10)
		customer.customer_code += "00" + to_string(id_customer);
	else
		customer.customer_code += "0" + to_string(id_customer);
	id_customer++;
	scanf("\n");
	getline(cin, customer.customer_name);
	in>>customer.sex;
	in>>customer.birth;
	cin.ignore(1, '\n');
	getline(cin, customer.address);
	customers[customer.customer_code] = customer;
	return in;
}

istream &operator >> (istream &in, MatHang &item){
	if(id_item < 10)
		item.item_code += "00" + to_string(id_item);
	else
		item.item_code += "0" + to_string(id_item);
	id_item++;
	cin.ignore(1, '\n');
	getline(cin, item.name_item);
	getline(cin, item.price_unit);
	in	>>item.cost_price
	  	>>item.price;
	items[item.item_code] = item;
	return in;
}

istream &operator >> (istream &in, HoaDon &bill){
	bill.code_bill = id_bill;
	id_bill++;
	in  >>bill.customer_code
		>>bill.item_code
		>>bill.amount;
	return in;
}

ostream &operator << (ostream &out, HoaDon bill){
	cout<<"HD"<<setfill('0')<<setw(3)<<bill.code_bill<<' ';
	cout<<customers[bill.customer_code].get_customer_name()<<' '
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
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin>>N;
    for(i=0; i<N; i++)	cin>>dskh[i];
    cin>>M;
    for(i=0; i<M; i++)	cin>>dsmh[i];
    cin>>K;
    for(i=0; i<K; i++)	cin>>dshd[i];
    for(i=0; i<K; i++)	cout<<dshd[i];
    return 0;
}
