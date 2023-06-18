#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,q,y;
	
	cin>>n>>m;
	
	string a[n+1],b[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	
	cin>>q;
	while(q--){
		cin>>y;
		int leftidx=(y%n);
		int rightidx=(y%m);
		if(y%n==0){
			leftidx=n;
		}
		if(y%m==0){
			rightidx=m;
		}
	cout<<a[leftidx]+b[rightidx]<<endl;
	}
	return 0;
}
