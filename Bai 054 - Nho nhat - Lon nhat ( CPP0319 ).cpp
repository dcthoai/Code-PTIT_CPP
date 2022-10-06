#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main() {
	int sum, n;
	cin>>n>>sum;
	int max[n], min[n];
	if((sum==0 && n>1) || sum>9*n) {
		cout<<"-1 -1";
	} else {
		if(sum==9*n) {
			for(int i=0; i<n; i++)
				cout<<9;
			cout<<' ';
			for(int i=0; i<n; i++)
				cout<<9;
		} else {
			int tmp1=0, tmp2=0;
			for(int i=0; i<n; i++) {
				for(int j=9; j>=0; j--) {
					if(j<=sum && j<=sum-tmp1) {
						max[i] = j;
						tmp1+=j;
						break;
					}
				}
			}
			min[0] = 1;
			sum--;
			for(int i=n-1; i>0; i--) {
				for(int j=9; j>=0; j--) {
					if(j<=sum && j<=sum-tmp2) {
						min[i] = j;
						tmp2+=j;
						break;
					}
				}
			}
			min[0]+=sum-tmp2;
			for(int i=0; i<n; i++)
				cout<<min[i];
			cout<<' ';
			for(int i=0; i<n; i++)
				cout<<max[i];
		}
	}
	return 0;
}
