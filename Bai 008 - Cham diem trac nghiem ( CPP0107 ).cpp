#include<iostream>
#include<string>
#include<iomanip>
#include<cctype>

using namespace std;

string topic101 = "ABBADCCABDCCABD";
string topic102 = "ACCABCDDBBCDDBB";

float check_point(string topic101, string topic102, string point, int ma_de){
	int diem = 0, cnt=0;
	if(ma_de==101){
		for(int i=0; i<point.size(); i++){
			if(point[i]<='D' && point[i]>='A'){
				if(point[i]==topic101[cnt])
					diem++;
				cnt++;
			}
		}
	}else{
		for(int i=0; i<point.size(); i++){
			if(point[i]<='D' && point[i]>='A'){
				if(point[i]==topic102[cnt])
					diem++;
				cnt++;
			}
		}
	}
	float diem_ktra = (float)diem*10/15;
	return diem_ktra;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int ma_de;
		cin>>ma_de;
		string point;
		cin.ignore();
		getline(cin, point);
		float diem = check_point(topic101, topic102, point, ma_de);
		cout<<fixed<<setprecision(2)<<diem<<endl;
	}
}

