#include<iostream>
#include<cstring>
using namespace std;

int compare_greater(string number1, string number2){
	int m = number1.size(), n = number2.size();
	if(m>n)
		return 1;
	if(m<n)
		return 0;
	for(int i=0; i<m; i++){
		if(number1[i] > number2[i])
			return 1;
		if(number1[i] < number2[i])
			return 0;
	}
	return 0;
}

string subtraction(string minuend, string subtrahend){
	int n = minuend.size(), m = subtrahend.size(), mind = 0;
	for(int i=0; i<n-m; i++)
		subtrahend = "0" + subtrahend;
	for(int i=n-1; i>=0; i--){
		minuend[i] = minuend[i] - subtrahend[i] + '0' - mind;
		if(minuend[i] < '0'){
			minuend[i] += 10;
			mind = 1;
		}else
			mind = 0;
	}
	return minuend;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string number1, number2;
        cin>>number1>>number2;
        if(compare_greater(number1, number2))
        	cout<<subtraction(number1, number2)<<endl;
        else
        	cout<<subtraction(number2, number1)<<endl;
    }
    return 0;
}
