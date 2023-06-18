#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

ll n;
vector<pair<ll,ll>>v;

void permutation(int a[],int l){
	ll p1[n+3]={}, p2[n+3]={};
	
	for(int i=1;i<=l;i++){
		p1[a[i]]=1;
	}	
	for(ll i=1;i<=l;i++){
		if(!p1[i]) return ;
//		cout<<p1[i]<<" ";
	}
	
	for(ll i=l+1;i<=n;i++){
		p2[a[i]]=1;
	}
//	cout<<"atas\n";
	for(ll i=1;i<=n-l;i++){
		if(!p2[i]) return ;
//		cout<<p2[i]<<" ";
	}
//	cout<<"bawah\n";
	v.push_back({l,n-l});
}

void solve(){
	cin>>n;
	
	int a[n+2];
	map<int,int>m;
	int maks=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		m[a[i]]+=1;
		maks=max(maks,a[i]);
	}
	
	for(auto x: m){
		if(x.second>2){
			cout<<0<<"\n";
			return;
		}
	}
	permutation(a,maks);
	if(maks*2!=n){
		permutation(a,n-maks);
	}
	
	cout<<v.size()<<"\n";
	for(ll i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}
	v.clear();
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

