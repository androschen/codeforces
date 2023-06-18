#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,k;
	
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int diff=0;
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			diff++;
		}
	}
//	cout<<diff<<"dif\n";
	if(diff==0){
		cout<<1<<"\n";
	}else{
		if(k==1){
			cout<<"-1\n";
		}else{
			cout<<(diff+k-1)/k<<"\n";
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

