#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MAX 1000007
#define INF (int)1e9
#define pb push_back
using namespace std;

const int mx=(int)1e3+7;
const ll MOD=1e9+7;

void solve(){
	int n;
	
	cin>>n;
	int w[n];
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	int suml=0,sumr=0;
	int l=1,r=n-1;
	int candies=1,ans=0;
	suml+=w[0];
	while(l<=r){
		if(suml>sumr){
			sumr+=w[r];
			r--;
			candies++;
		}else{
			suml+=w[l];
			l++;
			candies++;
		}
//		cout<<suml<<" "<<sumr<<"\n";
		if(suml==sumr) ans=candies;
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

