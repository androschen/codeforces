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

ll dp[35] = {};

void solve(){
	int n,k;
	
	cin>>n>>k;
	ll ans =0;
	if(k>32) k =32;
	int sum=0;

	for(int i=0;i<k;i++) {
		sum=0;
		for(int j=0;j<n;j++) {
			if ((i & (1 << j)) > 0) {
       			sum += dp[j];
       		}
      
		}
		if(sum<=n) {
			ans++;
		}
	}
	
	cout<<ans<<"\n";
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll price = 2;
	ll totalPrice=0;
	dp[0]=1;
    for(int i=1;i<32;i++) {
		totalPrice+=price;
		dp[i]= dp[i-1] + price;
		price*=2;
		cout<<dp[i]<<"\n";
	}
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

