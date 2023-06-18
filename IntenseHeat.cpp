#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	ll n,k;
	
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long double maxi=0,sum;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
			if(j-i+1>=k) maxi=max(sum/(j-i+1),maxi);
		}
	}	
	cout<<setprecision(10)<<maxi<<endl;
	
	return 0;
}

