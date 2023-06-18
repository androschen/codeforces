#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

vector<pair<int,int>>p;

void solve(){
	ll n;
	
	cin>>n;
	int l;
	for(int i=0;i<n;i++){
		cin>>l;
		vector<int> s(l);
		for(int j=0;j<l;j++){
			cin>>s[j];
		}
		reverse(s.begin(),s.end());
		if(is_sorted(s.begin(),s.end())){
			p.emplace_back(s[0],s.back());
		}
	}
	ll ans=n*n;
	sort(p.begin(),p.end());
//	for(auto x: p){
//		cout<<x.first<<" "<<x.second<<"\n";
//	}
	for(int i=0;i<p.size();i++){
		ans-=p.end() - lower_bound(p.begin(),p.end(), pair<int,int>(p[i].second, -1));
	}
	cout<<ans<<"\n";
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

