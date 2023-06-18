#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1e9+7
using namespace std;

int main(){
	int t,p,n,k,x,y;
	string a;
	
	cin>>t;
	while(t--){
		cin>>n>>p>>k;
		cin>>a;
		cin>>x>>y;
		int zero[n]={};
		for(int i=0;i<n;i++){
			if(a[i]=='0') zero[i]++;
		}
		for(int i=n-k-1;i>=0;i--){
			zero[i]+=zero[i+k];
		}
		int ans=MAX;
		for(int i=p-1;i<n;i++){
			ans=min(ans,((i-(p-1))*y+zero[i]*x));
		}
		
		cout<<ans<<endl;
	}

	return 0;
}

