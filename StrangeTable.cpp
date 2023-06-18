#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main(){
	ll t,n,m,x;
	
	cin>>t;
	while(t--){
		cin>>n>>m>>x;
	
		int num=1;

		ll idxl=(x-1)/n;
	
		ll idxr=(x-1)%n;
	
		cout<<idxr*m+idxl+1<<endl;
	}

	return 0;
}

