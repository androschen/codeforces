#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;


void solve(){
	ll x,n;
	
	cin>>x>>n;
	
	ll times=n/4;

	ll sum=4*times;
	ll subtract=1;
	if(n==0){
		cout<<x<<"\n";
		return;
	}
	if(n%4==0){
		subtract-=n+1;
	}else if(n%4==2){
		subtract-=n;
	}else if(n%4==3){
		subtract-=(n+n-1);
	}
	if(x%2==0){
		sum*=-1;
		subtract*=-1;
	}

	sum+=subtract;	
	
	cout<<x+sum<<"\n";
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

