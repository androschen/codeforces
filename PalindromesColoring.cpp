#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,k;
	string s;
	
	cin>>n>>k>>s;
	
	
	map<char,int>mp;
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	
	int cntPair=0,left=0;
	for(auto x: mp){
		cntPair+=x.second/2;
		left+=x.second%2;
	}
	
	int ans=2*(cntPair/k);
	left+=(cntPair%k)*2;
	if(left>=k) ans++;
	
	
	cout<<ans<<"\n";
	
//	for(auto x: mp){
//		cout<<x.first<<" "<<x.second<<"\n";
//	}
//	cout<<cntPair<<" "<<cntOdd<<"\n";
//	cout<<"===========\n\n";
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

