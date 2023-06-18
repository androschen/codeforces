#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n,m;
	
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a[n],b[m];
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]=i;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		ll ans=0;
		int idx=0;
		
		for(int i=0;i<m;i++){
			int x=mp[b[i]];
			if(x<=idx){
				ans++;
			}else{
				ans+=2*(x-i)+1;
				idx=x;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}

