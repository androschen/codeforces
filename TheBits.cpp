#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	string a,b;
	
	cin>>n;
	cin>>a>>b;
	
	ll cnt0=0,cnt1=0,sum1=0,sum2=0,ans=0;
	for(int i=0;i<n;i++){
		if(a[i]=='0') cnt0++;
		if(a[i]=='1') cnt1++;
		if(b[i]=='0'&&a[i]=='0') sum1++;
		if(b[i]=='0'&&a[i]=='1') sum2++;
	}
	for(int i=0;i<n;i++){
		if(b[i]=='0'&&a[i]=='0') ans+=cnt1;
		if(b[i]=='0'&&a[i]=='1') ans+=cnt0;
	}
	
	cout<<ans-sum1*sum2<<endl;
	
	return 0;
}

