#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	cin>>n;
	ll a[n];
	int one=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		if(a[i]==1) one++;
	}
	sort(a,a+n);
	ll xr=a[0];
	for(int i=1;i<n;i++){
		xr^=a[i];
	}
	if((sum-a[n-1])==a[n-1]&&xr==a[n-1]){
		cout<<0<<"\n";
	}else{
		if(one==n){
			if(n%2==1){
				cout<<2<<"\n";
				cout<<1<<" "<<n+1<<"\n";
			}else{
				cout<<3<<"\n";
				cout<<n<<" "<<n<<" "<<3*n<<"\n";
			}
		}else{
			cout<<2<<"\n";
			cout<<xr<<" "<<xr+sum<<"\n";
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

