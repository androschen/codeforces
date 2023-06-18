#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000000007
using namespace std;

void solve(){
	int n;
	cin>>n;
	int a[n];
	ll x= 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0) x=a[0];
		x&=a[i];
	}
//	cout<<x<<"\n";
	ll cnt=0;	
	for(int i=0;i<n;i++){
		if(a[i]==x) cnt++;
	}
	
	ll ans= cnt*(cnt-1);
	for(int i=1;i<=n-2;i++){
		ans*=i;
		ans%=MAX;
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

