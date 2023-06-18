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

const int mx=(int)1e5+7;
const ll MOD=1e9+7;


void solve(){
	int n,q,x;

	cin>>n>>q;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	vector<int>pre(n);
	
	pre[0]=a[0];
	for(int i=1;i<n;i++){
		pre[i]=pre[i-1]+a[i];
	}
//	for(int i=0;i<n;i++){
//		cout<<pre[i]<<"PRE\n";
//	}
	while(q--){
		cin>>x;
		auto ans= lower_bound(pre.begin(), pre.end(),x);
		
		if(ans-pre.begin()!=n){
			cout<<ans-pre.begin()+1<<"\n";
		}else{
			cout<<-1<<"\n";
		}
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

