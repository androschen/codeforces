#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	vector<ll>a;
	ll x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	ll maks=a[0];
	for(int i=0;i<n-1;i++){
		maks=max(maks,(a[i+1]-a[i]));
	}
	cout<<maks<<"\n";
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

