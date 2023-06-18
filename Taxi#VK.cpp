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
	int n;
	
	cin>>n;
	int sum=0;
	int s[n];
	int dp[5]={};
	for(int i=0;i<n;i++){
		cin>>s[i];
		dp[s[i]]++;
	}
	int gabung31=min(dp[3],dp[1]);
	dp[3]-=gabung31;
	dp[1]-=gabung31;
	
	int duasaja=dp[2]/2;
	dp[2]%=2;
	int gabung21 = 0;
	if(dp[2]>0&&dp[1]>0){
		gabung21 = 1;
		dp[2]-=gabung21;
		dp[1]-=(gabung21*2);
	}
	
	int ans=dp[4] + dp[3] + gabung31 + dp[2] + gabung21 + duasaja + dp[1]/4 + (dp[1]%4>0);
	
//	cout<<dp[4]<<" "<<dp[3]<<" "<<gabung31<<" "<<dp[2]<<" "<<gabung21<<" "<<dp[1]/4<<" "<<dp[1]<<"\n";
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

