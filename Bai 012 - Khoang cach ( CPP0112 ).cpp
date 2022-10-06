#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double x1, y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;
		double a = abs(x1-x2), b = abs(y1-y2);
		double khoang_cach = sqrt(a*a+b*b);
		cout<<fixed<<setprecision(4)<<khoang_cach<<endl;
	}
	return 0;
}

