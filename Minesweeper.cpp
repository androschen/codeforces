#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,m;
	
	cin>>n>>m;
	char mine[n+2][m+2];
	char valid[n+2][m+2];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			valid[i][j]='0';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mine[i][j];
			if(mine[i][j]=='*'){
				valid[i-1][j]+=1;
				valid[i+1][j]+=1;
				valid[i][j-1]+=1;
				valid[i][j+1]+=1;
				valid[i-1][j-1]+=1;
				valid[i+1][j-1]+=1;
				valid[i-1][j+1]+=1;
				valid[i+1][j+1]+=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mine[i][j]!='*'&&mine[i][j]!='.'){
				if(mine[i][j]!=valid[i][j]){
					cout<<"NO"<<endl;
					return 0;
				}
			}else if(mine[i][j]=='.'){
				if(valid[i][j]>'0'){
					cout<<"NO"<<endl;
					return 0;
				}
			}
		}
	}
	
	cout<<"YES"<<endl;
	
	return 0;
}

