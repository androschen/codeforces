#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int h1[n],h2[n];
	for(int i=0;i<n;i++){
		cin>>h1[i];
	}
	for(int i=0;i<n;i++){
		cin>>h2[i];
	}
	ll a[n],b[n];
	a[n-1]=h1[n-1];
	b[n-1]=h2[n-1];
	for(int i=n-2;i>=0;i--){
		a[i]=max(h1[i]+b[i+1],a[i+1]);
		b[i]=max(h2[i]+a[i+1],b[i+1]);
	}
//	for(int i=n-1;i>=0;i--){
//		cout<<a[i]<<" "<<b[i]<<endl;
//	}
	cout<<max(a[0],b[0])<<endl;

	return 0;
}

