#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	ll n,m;
	
	cin>>n>>m;
	if(n<=m*2) cout<<0<<" ";
	else cout<<n-m*2<<" ";
	if(m==0)cout<<n<<endl;
	else{
		ll cnt=1;
		ll sum=0;
		int i=1;
		while(sum<m){
			sum+=i++;
			cnt++;
		}
		cout<<n-cnt;
	}
		
	

	return 0;
}

