#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	
	cin>>n;
	ll k,x;
	for(int i=0;i<n;i++){
		cin>>k>>x;
		
		cout<<(k-1)*9+x<<endl;;
	}
	

	return 0;
}

