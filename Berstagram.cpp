#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,m;
	
	cin>>n>>m;
	int a;
	int pos[n+2]={},cur[n+2]={};
	pair<int,int>ans[n+2];
	for(int i=1;i<=n;i++){
		pos[i]=i;
		ans[i]={i,i};
		cur[i]=i;
	}
	for(int i=0;i<m;i++){
		cin>>a;
		int x= cur[a];
		if(x>1){
			int y=pos[x-1];
			
			cur[a]--;
			cur[y]++;
			
			swap(pos[x],pos[x-1]);
			
			ans[a].first= min(ans[a].first,cur[a]);
			ans[a].second= max(ans[a].second,cur[a]);
			
			ans[y].first= min(ans[y].first,cur[y]);
			ans[y].second= max(ans[y].second,cur[y]);
		}
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}
	

	return 0;
}

