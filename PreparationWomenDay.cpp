#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,k;
	
	cin>>n>>k;
	int d[n];
	int even=0,odd=0;
	map<int,int>m;
	for(int i=0;i<n;i++){
		cin>>d[i];
		int mod=d[i]%k;
		if(mod==0) mod+=k;
		m[mod]++;
	}
	ll ans=(m[k]/2)*2;
	ll sum=0;
	if(k%2==0){
		m[k/2]/=2;
		m[k/2]*=2;
	}
	for(auto x: m){
		int other = k-x.first;
		if(other>=1&&m.count(other)){
			sum+=min(x.second,m[other]);
		}
	}
	cout<<ans+sum<<endl;

	return 0;
}

