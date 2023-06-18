#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	ll a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	ll maxi=0;
	ll maxa=0;
	ll maxb=0;
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i]>a[i]) swap(a[i],b[i]);
	}
	for(int i=0;i<n;i++){
		maxa=max(maxa,a[i]);
		maxb=max(maxb,b[i]);
	}
	maxi=maxa*maxb;
	cout<<maxi<<"\n";
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

