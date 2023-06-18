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
	int a[n+5][m+5];
	int ans[n+5][m+5]={};

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			ans[i][j]=a[i][j];

		}
	}
	int maxi=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int sum=0;
			int ti=i,tj=j;
			while(ti>=0&&tj>=0){
				sum+=a[ti][tj];
				ti--;
				tj--;
			}
			ti=i,tj=j;
			while(ti<n&&tj<m){
				sum+=a[ti][tj];
				ti++;
				tj++;
			}
			ti=i,tj=j;
			while(ti>=0&&tj<m){
				sum+=a[ti][tj];
				ti--;
				tj++;
			}
			ti=i,tj=j;
			while(ti<n&&tj>=0){
				sum+=a[ti][tj];
				ti++;
				tj--;
			}
			sum-=(3*a[i][j]);
			maxi=max(maxi,sum);
		}
	}
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

