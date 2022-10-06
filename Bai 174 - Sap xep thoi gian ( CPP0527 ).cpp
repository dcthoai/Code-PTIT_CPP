#include<iostream>
using namespace std;

struct times{
    int hours;
    int minutes;
    int second;
    long long time = 0;
};

void import(struct times &t){
    cin>>t.hours;
    t.time += t.hours*3600;
    cin>>t.minutes;
    t.time += t.minutes*60;
    cin>>t.second;
    t.time += t.second;
}

void sort_times(struct times list_t[], int n){
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(list_t[i].time > list_t[j].time)
                swap(list_t[i], list_t[j]);
}

int main(){    
    int n;
    cin>>n;
    struct times list_t[n];
    for(int i=0; i<n; i++)
        import(list_t[i]);
    sort_times(list_t, n);
    for(int i=0; i<n; i++)
        cout<<list_t[i].hours<<' '
            <<list_t[i].minutes<<' '
            <<list_t[i].second<<endl;
    return 0;
}
