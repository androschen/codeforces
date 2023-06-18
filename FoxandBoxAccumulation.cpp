#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n);
	ll ans=1;
//	for(int i=0;i<n;i++){
//		cout<<x[i]<<" ";
//	}
//	cout<<"\n";
	for(int i=0;i<n;i++){
		if(x[i]<i/ans){
			ans++;
		}
	}
	cout<<ans<<endl;

	return 0;
}

