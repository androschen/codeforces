#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,x;
	
	cin>>t;
	while(t--){
		cin>>n>>x;
		int rank[1001]={0};
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			rank[a[i]]=1;
		}
		int ans=1;
		while(x){
			while(rank[ans]) ans++;
			rank[ans]=1;
			x--;
		}
		while(rank[ans]) ans++;
		cout<<ans-1<<endl;
	}
	return 0;
}
