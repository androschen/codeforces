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
	int n,k;
	
	cin>>n>>k;
	int h[n+1]={};
	int dp[n+1]={};
	dp[0]=0;
	for(int i=0;i<n;i++){
		cin>>h[i];
		dp[i+1]=dp[i]+h[i];
	}
	int ans=INT_MAX;
	int idx=-1;
	for(int i=k;i<=n;i++){
//		ans=min(ans,dp[i]-dp[i-3]);
		if(ans>dp[i]-dp[i-k]){
			idx=i-k+1;
			ans=dp[i]-dp[i-k];
		}
	}
	
	cout<<idx<<"\n";
	
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

