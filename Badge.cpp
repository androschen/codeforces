#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	
	cin>>n;
	int p[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	
	for(int i=1;i<=n;i++){
		vector<bool>visited(n,false);
		int t=i-1;
		while(!visited[t]){
			visited[t]=true;
			t=p[t]-1;
		}
		cout<<t+1<<" ";
	}

	return 0;
}

