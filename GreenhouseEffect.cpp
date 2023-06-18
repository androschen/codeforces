#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,m;
	
	cin>>n>>m;
	int s[n],a[n];
	double x;
	int dp[n]={};
	for(int i=0;i<n;i++){
		cin>>s[i]>>x;
	}
	for(int i=0;i<n;i++){
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(s[i]>=s[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
			cout<<"dp"<<j<<" "<<dp[j]<<" J\n";
		}
		cout<<i<<" "<<dp[i]<<" I\n";
	}
	cout<<n-*max_element(dp,dp+n)<<"\n";
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

