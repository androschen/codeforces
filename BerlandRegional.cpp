#include<bits/stdc++.h>

using namespace std;
#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		
		int u[n],s[n];
		for(int i=0;i<n;i++){
			cin>>u[i];
			u[i]--;
		}
		vector<vector<int>>team(n);
		for(int i=0;i<n;i++){
			cin>>s[i];
			team[u[i]].push_back(s[i]);
		}
		
		for(int i=0;i<n;i++){
			sort(team[i].begin(),team[i].end(),greater<int>());
		}
		
		vector<vector<long long>>sum(n,vector<long long>(1,0));
		for(int i=0;i<n;i++){
			for(int x: team[i]){
				sum[i].push_back(sum[i].back()+x);
			}
		}
		ll ans[n]={};
		for(int i=0;i<n;i++){
			for(int j=0;j<team[i].size();j++){
				ans[j]+=sum[i][team[i].size()/(j+1)*(j+1)];
			}
		}
	
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}

