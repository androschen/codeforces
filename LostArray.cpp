#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int n;
int a[1001];

bool ok(int d){
	for(int i=0;i+d<n;i++)
		if(a[i+1]-a[i]!=a[i+d+1]-a[i + d])
			return false;
			
	return true;
}

int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	vector<int>sz;
	for(int i=1;i<=n;i++){
		if(ok(i)){
			sz.push_back(i);
		}
	}
	cout<<sz.size()<<endl;
	for(int i=0;i<sz.size();i++){
		cout<<sz[i]<<" ";
	}
	
	return 0;
}

