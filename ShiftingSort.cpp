#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll n,xn;
	
	cin>>n;
	vector<ll>a;
	
	for(ll i=0;i<n;i++){
		cin>>xn;
		a.push_back(xn);
	}

	vector<vector<ll>>ans;
	for(ll i=n-1;i>0;i--){
		ll maxi=-100000000000;
		ll idx=-1;
		for(ll j=0;j<=i;j++){
			if(maxi<a[j]){
				maxi=a[j];
				idx=j;
			}
		}
		if(idx==i) continue;
		else{
			vector<ll>tempa;
			
			for(ll j=0;j<=i;j++){
				tempa[j]=a[(j+idx+1)%(i+1)];
			}
			
			a=tempa;
			ans.push_back({1,i+1,idx+1});
		}
	}
	cout<<ans.size()<<"\n";
	for(auto x: ans){
		for(auto y: x){
			cout<<y<<" ";
		}
		cout<<"\n";
	}
	
	
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

