#include<iostream>
#include<set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, tmp = 1;
        cin >> n >> x;
        set<int> s;
        set<int>::iterator it;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            s.insert(val);
        }
        for(int i : s){
            it = s.find(i-x);
            if(it!=s.end()){
                cout<<1<<endl;
                tmp = 0;
                break;
            }
        }
        if(tmp)
            cout<<"-1"<<endl;
    }
    return 0;
}

