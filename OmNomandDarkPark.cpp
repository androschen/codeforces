#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	cin>>n;
	int nodes=pow(2,n+1);
	int a[nodes]={},dp[nodes]={};
	for(int i=2;i<nodes;i++){
		cin>>a[i];
	}
	int light=0,it=2;
	
	for(int i=1;i<n;i++){
		for(int j=it;j<it*2;j++){
			a[2*j]+=a[j];
			a[2*j+1]+=a[j];
		}
		it*=2;
	}
	
	int maxi=0;
	for(int i=nodes/2;i<nodes;i++){
		maxi=max(maxi,a[i]);		
	}
	for(int i=nodes/2;i<nodes;i++){
		dp[i]=maxi-a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=nodes/2;j<nodes;j+=2){
			dp[j/2]=min(dp[j],dp[j+1]);
			light+=dp[j]+dp[j+1]-2*dp[j/2];
		}
		nodes/=2;
	}
	light+=dp[1]*2;
	cout<<light<<"\n";
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

