#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	
	ll k[n],h[n];
	
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	vector<pair<ll,ll>> v;
	
	for(int i=0;i<n;i++){
		v.push_back(k[i]-h[i],k[i]);
	}
	
	sort(v.begin(),v.end());
	
	int mana=0;
	
	int l=1, r=0;
	for(auto [cl vr]: v){
		if(cl>r){
			int n=(r-l+1);
			mana+=n*(n+1)/2;
			l=cl;
			r=cr;
			
		}
	}
	

	
	cout<<mana<<"\n";
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

