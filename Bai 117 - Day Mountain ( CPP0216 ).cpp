#include<iostream>
using namespace std;

int check(int a[], int n, int L, int R){
    int max = a[R], index = R;
    for(int i=L; i<=R; i++){
        if(a[i]>max){
            max = a[i];
            index = i;
        }
    }
    for(int i=L+1; i<=index; i++)
        if(a[i]<a[i-1])
            return 0;
    for(int i=index+1; i<=R; i++)
        if(a[i]>a[i-1])
            return 0;
    return 1;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, L, R;
        cin>>n;
        int a[n];
        for(int &i : a)
            cin>>i;
        cin>>L>>R;
        if(R-L<2)
            cout<<"Yes"<<endl;
        else{
            int tmp = check(a, n, L, R);
            if(tmp)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
