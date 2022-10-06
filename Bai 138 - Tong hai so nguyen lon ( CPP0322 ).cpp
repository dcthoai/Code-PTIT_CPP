#include<iostream>
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

int main() {
    int t;
    cin>>t;
    while(t--) {
        string number1, number2;
        cin>>number1>>number2;
        if(number1.size() > number2.size()) 
            cout<<two_sum(number1, number2)<<endl;
        else             
            cout<<two_sum(number2, number1)<<endl;
    }
    return 0;
}
