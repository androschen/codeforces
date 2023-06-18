#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0)	a[i]=min(a[i],a[i-1]);
	}
	int curr=n-1;
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	
	for(int i=0;i<n;i++){
		while(b[i]>a[curr-1]&&curr>0) curr--;
		ans=min(ans,i+curr);
//		cout<<ans<<"\n";
	}
	cout<<ans<<"\n";
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

