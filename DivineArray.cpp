#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 100007
using namespace std;

void solve(){
	int n,q,x,k;
	
	cin>>n;
	int a[10005][n+2],count[n+5]={};
	
	for(int i=1;i<=n;i++){
		cin>>a[0][i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			count[a[i-1][j]]++;
		}
		for(int j=1;j<=n;j++){
			a[i][j]=count[a[i-1][j]];
		}
		memset(count,0,sizeof(count));
	}
	cin>>q;
	while(q--){
		cin>>x>>k;
		if(k>n) k=n;
		cout<<a[k][x]<<"\n";
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

