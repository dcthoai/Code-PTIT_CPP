#include<bits/stdc++.h>
using namespace std;

struct point{
	double x;
	double y;
};

double area_triangle(point A, point B, point C){
	double x1 = A.x - B.x;
	double y1 = A.y - B.y;
	double x2 = A.x - C.x;
	double y2 = A.y - C.y;
	double x3 = B.x - C.x;
	double y3 = B.y - C.y;
	double AB = sqrt(x1*x1 + y1*y1);
	double AC = sqrt(x2*x2 + y2*y2);
	double BC = sqrt(x3*x3 + y3*y3);
	return 0.25*sqrt((AB+AC+BC)*(AB+AC-BC)*(AC+BC-AB)*(AB+BC-AC));
}

double area_polygon(point p[], int n){
	double sum_area = 0;
	for(int i=1; i<n-1; i++)
		sum_area += area_triangle(p[0], p[i], p[i+1]); 
	return sum_area;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		point p[n];
		for(int i=0; i<n; i++)
			cin>>p[i].x>>p[i].y;
		cout<<fixed<<setprecision(3)<<area_polygon(p, n)<<endl;
	}
	return 0;
}
