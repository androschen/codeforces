#include<bits/stdc++.h>

using namespace std;

int main(){
	int l,n;
	
	cin>>n>>l;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	
	int maks=0;
	for(int i=0;i<n-1;i++){
		if(a[i+1]-a[i]>maks){
			maks=a[i+1]-a[i];
		}
	}
	double x=(double)a[0];
	double y=(double)maks/2;
	double z=(double)l-a[n-1];
	double ans=max(x,y);
	ans=max(z,ans);
	
	cout<<fixed<<setprecision(10)<<ans<<endl;
	
	return 0;
}
