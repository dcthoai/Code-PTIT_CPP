#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.141592653589793238

using namespace std;

struct point{
	double x;
	double y;
};

struct triangle{
	struct point pA;
	struct point pB;
	struct point pC;
	double A, B, C;
};

int main(){
	int t;
	cin>>t;
	while(t--){
		struct triangle tri;
		cin >>tri.pA.x>>tri.pA.y
			>>tri.pB.x>>tri.pB.y
			>>tri.pC.x>>tri.pC.y;
		double x1 = tri.pA.x - tri.pB.x;
		double y1 = tri.pA.y - tri.pB.y;
		double x2 = tri.pA.x - tri.pC.x;
		double y2 = tri.pA.y - tri.pC.y;
		double x3 = tri.pC.x - tri.pB.x;
		double y3 = tri.pC.y - tri.pB.y;
		tri.A = sqrt(x1*x1 + y1*y1);
		tri.B = sqrt(x2*x2 + y2*y2);
		tri.C = sqrt(x3*x3 + y3*y3);
		if(tri.A+tri.B<=tri.C || tri.A+tri.C<=tri.B || tri.B+tri.C<=tri.A)
			cout<<"INVALID"<<endl;
		else{
			double S = 0.25*sqrt((tri.A+tri.B+tri.C) * (tri.A+tri.B-tri.C) * (tri.A+tri.C-tri.B) * (tri.B+tri.C-tri.A));
			double R = (tri.A * tri.B * tri.C) / (4*S);
			cout<<fixed<<setprecision(3)<<(PI*R*R)<<endl;
		}
	}
	return 0;
}

