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
	int n,m;
	
	cin>>n>>m;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum=0;
			for(int k=0;k<m;k++){
				sum+=abs((s[i][k]-'a')-(s[j][k]-'a'));
			}
			mini=min(mini,sum);
		}
	}
	
	cout<<mini<<"\n";
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

