#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n+2];
		map<ll,ll>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			m[a[i]-i]++;
		}
		ll cnt=0;
		for(auto x: m){
			if(x.second){
				cnt+=(x.second-1)*(x.second)/2;
			}
		}
		cout<<cnt<<"\n";
	}

	return 0;
}

