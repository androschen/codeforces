#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll n;
	string s;
	
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>s;
	vector<pair<char,ll>> v;
	for(int i=0;i<n;i++){
		
		v.push_back({s[i],a[i]});
	}
	sort(v.begin(),v.end());
	bool check=true;
	ll che=1;
	for(auto x: v){
		if(x.first=='R'){
			if(x.second>n||x.second>che){
				check=false;
			}
		}else{
			if(x.second<che||x.second<1){
				check=false;
			}
		}
		che++;
//		cout<<x.first<<" "<<x.second<<"\n";
	}
	if(check){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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

