#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll n;
	
	cin>>n;
	ll l,r,c;
	ll price=0,len=0;
	ll mini=INT_MAX, maxi=0;
	ll lprice=INT_MAX,rprice=INT_MAX;
	
	for(int i=0;i<n;i++){
		cin>>l>>r>>c;
		
		if(l<=mini){
			if(l<mini){
				lprice=c;
			}else if(l==mini&&c<price){
				lprice=c;
			}
			mini=l;
		}
		if(r>=maxi){
			if(r>maxi){
				rprice=c;
			}else if(r==maxi&&c<rprice){
				rprice=c;
			}
			maxi=r;
		}
		if(len<=r-l){
			if(len<r-l){
				len=r-l;
				price=c;
			}else if(len==r-l&&c<price){
				price=c;
			}
		}
		ll ans=lprice+rprice;
		if(len==maxi-mini) ans=min(ans,price);
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

