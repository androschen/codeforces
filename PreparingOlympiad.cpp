#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,l,r,x;
	
	cin>>n>>l>>r>>x;
	int c[n];
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	int cnt=0;
	for(int i=0;i<(1<<n);i++){
		int sum=0,maks=0,mini=10000001,prb=0;
		for(int j=0;j<n;j++){
			if((i&(1<<j))!=0){
				prb++;
				sum+=c[j];
				mini=min(mini,c[j]);
				maks=max(maks,c[j]);	
//				cout<<c[j]<<" ";
			}
		}
//		cout<<"loop\n";
		if(sum>=l&&sum<=r&&maks-mini>=x) cnt++;
	}
	cout<<cnt<<"\n";
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

