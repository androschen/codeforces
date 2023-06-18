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
	int n,k;
	
	cin>>n>>k;
	int a[n];
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	int first=0,last=0;
	bool getfirst=false,nah=false;
	int maxi=-1;
	
	int aleft,aright;
	stack<int>s;
	for(auto x:mp){
		if(x.second>=k){
			nah=true;
			if(!getfirst){
				first=x.first;
				getfirst=true;
			}else{
				if(x.first-last>1){
					first=x.first;
				}
			}
			if(getfirst) last=x.first;
			s.push(x.first);
		}else{
			getfirst=false;
		}
		if(last-first>=maxi){
			maxi=last-first;
			aleft=first;
			aright=last;
		}
	}
	if(nah) cout<<aleft<<" "<<aright<<"\n";
	else cout<<"-1\n";
	mp.clear();
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

