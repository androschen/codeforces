#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,m;
	
	cin>>n>>m;
	char a[n][m];
	int wall=0;
	int row[n+1]={},col[m+1]={};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]=='*'){
				row[i]++;
				col[j]++;
				wall++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int bomb=row[i]+col[j]-(a[i][j]=='*');
			if(bomb==wall){
				cout<<"YES"<<endl;
				cout<<i+1<<" "<<j+1<<endl;
				return 0;
			}
		}
	}
	
	cout<<"NO"<<endl;
	

	return 0;
}

