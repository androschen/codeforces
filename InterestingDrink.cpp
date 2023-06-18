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

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void solve(){
	int n,q,a;
	
	cin>>n;
	vector<int>x;
	for(int i=0;i<n;i++){
		cin>>a;
		x.pb(a);
	}
	sort(x.begin(),x.end());
	cin>>q;
	while(q--){
		cin>>a;
		auto z = upper_bound(x.begin(),x.end(),a);
//		int cnt=0;
//		if(*z==a) cnt=1;
		cout<<z-x.begin()<<"\n";
	}
	
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

