#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll n,h;
	
	cin>>n>>h;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll low=0,high=LLONG_MAX, mid;
	while(low+1<high){
		mid=(low+high)/2;
		ll hit=0;
		for(int i=0;i<n-1;i++){
			ll poison=min(a[i+1]-a[i],mid);
			hit+=poison;
		}
		hit+=mid;
		if(hit>=h){
			high=mid;
		}else{
			low=mid;
		}
	}
	cout<<high<<"\n";
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

