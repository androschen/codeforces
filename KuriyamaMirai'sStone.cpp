#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MAX 1000007
#define INF (int)1e9
#define pb push_back
using namespace std;

const int mx=(int)1e3+7;
const ll MOD=1e9+7;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void solve(){
	int n,m,a,type,l,r;
	
	cin>>n;
	vector<ll>v;
	vector<ll>dp(n+1,0);
	vector<ll>cost(n+1,0);
	for(int i=0;i<n;i++){
		cin>>a;
		v.pb(a);
		dp[i+1]=dp[i]+a;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cost[i+1]=cost[i]+v[i];
	}
	cin>>m;
	while(m--){
		cin>>type>>l>>r;
		if(type==1){
			cout<<dp[r]-dp[l-1]<<"\n";
		}else{
			cout<<cost[r]-cost[l-1]<<"\n";
		}
	}
	
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

