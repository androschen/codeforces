#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	ll n,m;
	
	cin>>n>>m;
	while(1){
		if(n==0||m==0) break;
		if(n>=2*m) n=n%(2*m);
		else if(m>=2*n) m=m%(2*n);
		else{
			break;
		}
	}
	
	cout<<n<<" "<<m<<endl;

	return 0;
}

