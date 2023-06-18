#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int m=2*n;
		ll a[m];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		sort(a,a+m);
	
		cout<<abs(a[n]-a[n-1])<<endl;
	}

	return 0;
}

