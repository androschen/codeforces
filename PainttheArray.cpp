#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	ll a[n+5];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll d=a[0],dE=a[1];
	for(int i=2;i<n;i++){
		if(i%2==0){
			d =__gcd(d,a[i]);
		}else{
			dE=__gcd(dE,a[i]);
		}
	}
	bool check=true,check2=true;
	for(int i=0;i<n;i++){
		if(i%2==0&&a[i]%dE==0) check=false;
		else if(i%2==1&&a[i]%d==0) check2=false;
	}
	
	if(check){
		cout<<dE<<"\n";
	}else if(check2){
		cout<<d<<"\n";
	}else{
		cout<<0<<"\n";
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

