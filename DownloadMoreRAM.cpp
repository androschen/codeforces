#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll n,k;
	
	cin>>n>>k;
	ll a[n],b[n];
	
	vector<pair<ll,ll>>v;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		v.push_back({a[i],b[i]});
	}
	sort(v.begin(),v.end());
	
	ll ram=k;
	for(auto x: v){
		if(ram>=x.first){
			ram+=x.second;
		}
	}
	
	cout<<ram<<"\n";
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

