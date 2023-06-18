#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

set<int>mset[4];

void solve(){
	int n,m;
	
	cin>>n;
	ll p[n],a[n],b[n];

	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		mset[a[i]].insert(p[i]);
		mset[b[i]].insert(p[i]);
	}
	cin>>m;
	int c;

	for(int i=0;i<m;i++){
		cin>>c;
		if(mset[c].size()==0){
			cout<<"-1 ";
		}else{
			int buyed= *mset[c].begin();
			cout<<buyed<<" ";
			for(int i=1;i<=3;i++){
				mset[i].erase(buyed);
			}	
		}
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

