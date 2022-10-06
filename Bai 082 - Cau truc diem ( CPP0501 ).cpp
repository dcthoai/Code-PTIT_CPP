#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct Point{
	double a, b;
};

void input(struct Point &X){
	cin>>X.a;
	cin>>X.b;
}

double distance(struct Point A, struct Point B){
	double s = sqrt((A.a-B.a)*(A.a-B.a)+(A.b-B.b)*(A.b-B.b));
	return s;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A);
		input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

