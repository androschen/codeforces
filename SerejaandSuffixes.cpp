#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,m,l;
	set<int>myset;
	
	cin>>n>>m;
	int a[n+2];
	int count[n]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		myset.insert(a[i]);
		count[i]=myset.size();
	}
	while(m--){
		cin>>l;
		cout<<count[l]<<endl;
	}

	return 0;
}

