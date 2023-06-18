#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	int a[n];
	
	int maxi=0;
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxi=max(a[i],maxi);
		mini=min(a[i],mini);
	}
	
	cout<<maxi-mini<<"\n";
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

