#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 10007
using namespace std;

vector<int>adj[MAX];
bool vis[MAX];

void dfs(int x){
	if(vis[x]) return;
	vis[x]=true;
	for(auto i: adj[x]){
		dfs(i);
	}
}

void solve(){
	int n,m;
	
	cin>>n>>m;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			cnt++;
			dfs(i);
		}
	}
	cout<<(ll)pow(2,n-cnt)<<"\n";
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

