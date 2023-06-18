#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int l,r,k;
	
	cin>>l>>r>>k;
	if(l==r&&l!=1){
		cout<<"YES\n";	
	}else{
		int range=(r-l+1)/2;
		if(l%2==1&&r%2==1) range++;
		
		if(range>k){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
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

