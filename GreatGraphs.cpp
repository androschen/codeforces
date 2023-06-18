#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	int d[n];
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>d[i];
	}
	sort(d,d+n);
	ll ans=0,cur=0;
	for(int i=2;i<n;i++){
		sum+=d[i-2];
		cur++;
		if(i>1) ans+=sum-cur*d[i];
	}
	
	if(n<=2){
		cout<<d[0]<<"\n";
	}else{
		cout<<ans<<"\n";
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

