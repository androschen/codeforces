#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 501
using namespace std;

int maxi[MAX]={};
int n,m,q;
int grid[MAX][MAX];

void calMax(int i){
	int cnt=0;
	maxi[i]=0;
	for(int j=0;j<m;j++){
		if(grid[i][j]) cnt++;	
		else cnt=0;	
		maxi[i]=max(maxi[i],cnt);
	}
}

void solve(){
	cin>>n>>m>>q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=0;i<n;i++){
		calMax(i);
	}
	int it,jt;
	while(q--){
		cin>>it>>jt;
		it--,jt--;
		grid[it][jt]^=1;
		int ans=0;
		calMax(it);
		for(int i=0;i<n;i++){
			ans=max(ans,maxi[i]);
		}
	
		cout<<ans<<"\n";
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

