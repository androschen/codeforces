#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

vector<int>g[MAX];

int color[MAX];
int siz[MAX];
int c=0;
int n,m,k,x;

int dfs(int x){
	if(color[x]) return 0;
	
	color[x]=c;
	int ans=(x<n ?1:0);
	for(auto y: g[x]){
		ans+=dfs(y);
	}
	return ans;
}

int main(){
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>x;
			x--;
			g[x].push_back(i+n);
			g[i+n].push_back(x);
		}
	}
	for(int i=0;i<n;i++){
		if(!color[i]){
			c++;
			siz[c]=dfs(i);
		}
		cout<<siz[color[i]]<<" ";
	}

	return 0;
}

