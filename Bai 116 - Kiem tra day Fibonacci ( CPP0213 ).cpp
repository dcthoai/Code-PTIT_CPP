#include<iostream>
#include <cmath>
using namespace std;

int fibonaci(int n) {
    int i=1, j=1;
    int fi;
    if(n<2)
        return 1;
    while(1) {
        fi = i+j;
        i = j;
        j = fi;
        if(fi==n)
            return 1;
        if(fi>n)
            return 0;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int &i : a)
            cin>>i;
        for(int i : a)
            if(fibonaci(i))
                cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
