#include<bits/stdc++.h>
using namespace std;

typedef struct{
	int x, y, z;
}points;

void import(points &A){
	cin>>A.x>>A.y>>A.z;
}

points vector_(points A, points B){
	points X;
	X.x = B.x - A.x;
	X.y = B.y - A.y;
	X.z = B.z - A.z;
	return X; 
} 

points vector_n(points AB, points AC){
	points AB_AC;
	AB_AC.x = AB.y*AC.z - AB.z*AC.y;
	AB_AC.y = - (AB.x*AC.z - AB.z*AC.x);
	AB_AC.z = AB.x*AC.y - AB.y*AC.x;
	return AB_AC;
}

int check(points A, points B, points C, points D){
	points AB, AC, AB_AC, n;
	AB = vector_(A, B);
	AC = vector_(A, C);
	AB_AC = vector_n(AB, AC);
	int tmp = AB_AC.x*(D.x - A.x) + AB_AC.y*(D.y - A.y) + AB_AC.z*(D.z - A.z);
	if(tmp)
		return 0;
	return 1;
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		points A, B, C, D;
		import(A);
		import(B);
		import(C);
		import(D);
		if(check(A, B, C, D))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

