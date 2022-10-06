#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

string two_sum(string big_number, string small_number){
	int n = big_number.size(), m = small_number.size(), mind = 0;
	for(int i=0; i<n-m; i++)
		small_number = "0" + small_number;
	for(int i=n-1; i>=0; i--){
		big_number[i] += small_number[i] - '0' + mind;
		if(big_number[i] > '9'){
			big_number[i] -= 10;
			mind = 1;
		}else
			mind = 0;
	}
	if(mind)
		big_number = "1" + big_number;
	return big_number;
}

string product(string number, char c){
	int n = number.size(), mind = 0, x = c - '0';
	for(int i=n-1; i>=0; i--){
		char tmp = (number[i] - '0')*x + mind;
		number[i] = tmp%10 + '0';
		mind = tmp/10;
	}
	if(mind)
		number = to_string(mind) + number;
	return number;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string number1, number2;
		cin>>number1>>number2;
		string product_number = "";
		int n = number1.size(), m = number2.size();
		for(int i=0; i<n; i++)
			product_number += "0";
		for(int i=m-1; i>=0; i--){
			string mind = product(number1, number2[i]);
			for(int j=m-1; j>i; j--)
				mind += "0";
			if(mind.size() > n)
				product_number = two_sum(mind, product_number);
			else
				product_number = two_sum(product_number, mind);
		}
		cout<<product_number<<endl;
	}
	return 0;
}

