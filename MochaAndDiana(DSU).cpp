#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

vector<int> parent(MAX),parent2(MAX);
vector<int> sz(MAX),sz2(MAX);

void make_set(int v){
	parent[v]=v,parent2[v]=v;
	sz[v]=1,sz2[v]=1;
}

//find value on set
int find_set(int v,vector<int> &parent){
	if(v==parent[v]) return v;
	
	return parent[v]= find_set(parent[v],parent);
}

// merge  union sets
void union_sets(int a,int b,vector<int> &parent){
	a=find_set(a,parent);
	b=find_set(b,parent);
	if(a!=b){
		if(sz[a]<sz[b]){
			swap(a,b);
		}
		parent[b]=a;
		sz[a]+=sz[b];
	}
}

void solve(){
	int n,m1,m2,u,v;
	
	cin>>n>>m1>>m2;
	for(int i=0;i<=n;i++){
		make_set(i);
	}
	vector<vector<int>> edges,edges2;
	for(int i=0;i<m1;i++){
		cin>>u>>v;   
		union_sets(u,v,parent);
	}
	for(int i=0;i<m2;i++){
		cin>>u>>v;
		union_sets(u,v,parent2);
	}
	vector<vector<int>>ans;
	bool cycle=false;
	int cnt=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			int a=find_set(i,parent);
			int b=find_set(j,parent);
			int c=find_set(i,parent2);
			int d=find_set(j,parent2);
			if(a!=b&&c!=d){
				union_sets(i,j,parent);
				union_sets(i,j,parent2);
				ans.push_back({i,j});
			}
		}
	}
	cout<<ans.size()<<"\n";
	for(auto x: ans){
		cout<<x[0]<<" "<<x[1]<<"\n";
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

