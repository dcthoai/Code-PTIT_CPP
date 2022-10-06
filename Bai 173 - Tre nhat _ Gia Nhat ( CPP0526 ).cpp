#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

struct person{
    string name;
    string birth = "";
};

void import_person(struct person &p){
    cin>>p.name;
    string date[3], token, s;
    cin>>s;
    stringstream ss(s);
    int i=3;
    while(getline(ss, token, '/'))
        date[--i] = token;
    for(int j=0; j<3; j++)
        p.birth += date[j];
}

void sort_list_person(struct person list_person[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(list_person[i].birth < list_person[j].birth)
                swap(list_person[i], list_person[j]);
        }
    }
}

int main()
{
    struct person list_person[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        import_person(list_person[i]);
    sort_list_person(list_person, n);
    cout<<list_person[0].name<<endl;
    cout<<list_person[n-1].name<<endl;
    return 0;
}
