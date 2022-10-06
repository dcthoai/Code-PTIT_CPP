#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    string str;
    while(input>>str){
        output<<str<<endl;
    } 
    input.close();
    output.close();
    return 0;
}
