#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n]={};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==1) cout<<a[n/2]<<" ";
		for(int i=n/2-1;i>=0;i--){
			cout<<a[i]<<" "<<a[n-i-1]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}

