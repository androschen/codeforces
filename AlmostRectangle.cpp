#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		char mark[n][n];
		int x[2],y[2];
		int idx=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>mark[i][j];
				if(mark[i][j]=='*'){
					x[idx]=j;
					y[idx]=i;
					idx++;
				}
			}
		}
		if(x[0]==x[1]){
			if(x[0]==0){
				mark[y[0]][x[0]+1]='*';
				mark[y[1]][x[1]+1]='*';
			}else{
				mark[y[0]][x[0]-1]='*';
				mark[y[1]][x[1]-1]='*';
			}
		}else if(y[0]==y[1]){
			if(y[0]==0){
				mark[y[0]+1][x[0]]='*';
				mark[y[1]+1][x[1]]='*';
			}else{
				mark[y[0]-1][x[0]]='*';
				mark[y[1]-1][x[1]]='*';
			}
		}else{
			mark[y[1]][x[0]]='*';
			mark[y[0]][x[1]]='*';		
		}
	
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mark[i][j];
			}
			cout<<"\n";
		}
	}
	
	return 0;
}

