#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int m, n;
		cin>>m>>n;
		int matrixA[m][n], matrixB[m][n];
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++){
				cin>>matrixA[i][j];
				matrixB[i][j] = matrixA[i][j];
			}
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
				if(matrixA[i][j]==1){
					for(int k=0; k<n; k++)
						matrixB[i][k] = 1;
					for(int k=0; k<m; k++)
						matrixB[k][j] = 1;
				}
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++)
				cout<<matrixB[i][j]<<' ';
			cout<<endl;
		}
	}
	return 0;
}

