#include<bits/stdc++.h>

using namespace std;

void solve(int *b,long long int *a,int n){
	
		sort(b,b+n);
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			if(b[i]==b[i+1]){
				cout<<"YES"<<endl;
				return;
			}
		}
	cout<<"NO"<<endl;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int b[n];
		long long int a[n];
		for(int i=0;i<n;i++){
			cin>>b[i];
			a[i]=pow(2,b[i]);
		}
		solve(b,a,n);
	}
	
	return 0;
}

