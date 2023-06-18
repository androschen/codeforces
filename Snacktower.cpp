#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 100007

int main(){
	int n;
	stack<int>st;
	
	cin>>n;
	int sz[n+2];
	
	vector<bool>vis(n+2);
	for(int i=1;i<=n;i++){
		cin>>sz[i];
	}
	int c=n;
	for(int i=1;i<=n;i++){
		vis[sz[i]]=true;
		
		while(vis[c]&&c>0){
			cout<<c--<<" ";
		}
		cout<<"\n";
	}
	

	return 0;
}

