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
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	for(int i=0;i*i<=n;i++){
		int x=n-i;
		if(sum%x==0){
			ll curr=0,goal=sum/x;
			for(int j=0;j<n;j++){
				curr+=a[j];
				if(curr==goal){
					curr=0;
				}else if(curr>goal){
					break;
				}
			}
			if(curr==0){
				cout<<i<<"\n";
				return;
			}
		}
	}
	cout<<n-1<<"\n";
	
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

