#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll a,b;
	
	cin>>a>>b;
	ll team =min((a+b)/4,min(a,b));
	
	cout<<team<<"\n";
}


int main(){
	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

