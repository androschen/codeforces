#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll n;
	
	cin>>n;
	ll cnt=0;
	map<ll,ll> mp;
	for(ll i=1;i<=n;i++){
		if(i*i>n) break;
		
		if(i*i<=n){
			mp[i*i]++;
		}
		if(i*i*i<=n){
			mp[i*i*i]++;
		}
	}
	cout<<mp.size()<<"\n";
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

