#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int h[n];
		long long int sum=0;
		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		bool check=true;
		for(int i=0;i<n;i++){
			if(h[i]>=i){
				sum+=h[i]-i;
			}else if(h[i]+sum>=i){
				sum-=i-h[i];
			}else{
				cout<<"NO"<<endl;
				check=false;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
	}
	return 0;
}
