#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll a,b,c;
	
	cin>>a>>b>>c;
	
	
	if(a==b&&b==c||(b-a)==(c-b)){
		cout<<"YES\n";
	}else if((a+c)%(2*b)==0){
		cout<<"YES\n";
	}else if((2*b-c)%a==0&&2*b-c>0){
		cout<<"YES\n";
	}else if((2*b-a)%c==0&&2*b-a>0){
		cout<<"YES\n";	
	}else if((a==b&&a%c==0)||(a==c&&a%b==0)||(b==c&&b%a==0)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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

