#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

struct items{
	int code_item;
	string name_item;
	string type_item;
	double cost_price, sales_price;
	double profit; 
}; 

void import_items(struct items list_items[], int n){
	for(int i=0; i<n; i++){
		list_items[i].code_item = i+1;
		cin.ignore(1);
		getline(cin, list_items[i].name_item);
		getline(cin, list_items[i].type_item);
		cin>>list_items[i].cost_price;
		cin>>list_items[i].sales_price;
		list_items[i].profit = list_items[i].sales_price - list_items[i].cost_price;
	}
}

void sort_items(struct items list_items[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(list_items[i].profit < list_items[j].profit)
				swap(list_items[i], list_items[j]);
}

void print_items(struct items list_items[], int n){
	for(int i=0; i<n; i++){
		cout<<list_items[i].code_item<<' '
			<<list_items[i].name_item<<' '
			<<list_items[i].type_item<<' '
			<<fixed<<setprecision(2)<<list_items[i].profit<<endl;
	}
}

int main(){
	struct items list_items[100];
	int n;
	cin>>n;
	import_items(list_items, n);
	sort_items(list_items, n);
	print_items(list_items, n);
	return 0;
}

