#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	ll a[n+1];
	ll operation=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		operation+=abs(a[i]-a[i-1]);
	}
	ll change=max(abs(a[0]-a[1]),abs(a[n-1]-a[n-2]));
	
	for(int i=1;i<n-1;i++){
		change=max(change,(abs(a[i]-a[i+1])+abs(a[i]-a[i-1])-abs(a[i+1]-a[i-1])));
	}
	
	cout<<operation-change<<"\n";
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

