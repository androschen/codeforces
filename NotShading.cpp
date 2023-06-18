#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,m,r,c;
	
	cin>>n>>m>>r>>c;
	
	char bw[n+3][m+3];
	int row[n+2]={},column[m+2]={};
	bool check=false;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>bw[i][j];
			if(bw[i][j]=='B'){
				check=true;
				row[i]++;
				column[j]++;
			}
		}
	}
	
	if(bw[r][c]=='B'){
		cout<<0<<"\n";
	}else if(check){
		if(row[r]>=1||column[c]>=1){
			cout<<1<<"\n";
		}else{
			cout<<2<<"\n";
		}
	}else{
		cout<<-1<<"\n";
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

