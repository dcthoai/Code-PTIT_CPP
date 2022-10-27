#include<bits/stdc++.h>

using namespace std;

string edit(string s){
	for(int i=0; i<s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	ifstream input1("DATA1.in");
	ifstream input2("DATA2.in");
	string s;
	set<string> data1;
	set<string> data2;
	set<string> total_data;
	while(input1>>s){
		s = edit(s);
		data1.insert(s);
		total_data.insert(s);
	}
	while(input2>>s){
		s = edit(s);
		data2.insert(s);
		total_data.insert(s);
	}
	for(string i : total_data)
		cout<<i<<' ';
	cout<<endl;
	for(string i : data1)
		if(data2.count(i))
			cout<<i<<' ';
	input1.close();
	input2.close();
	return 0;
}

