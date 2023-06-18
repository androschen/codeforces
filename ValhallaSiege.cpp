#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n,q;
	
	cin>>n>>q;
	ll a[n],k[q];
	ll power=0;
	vector<ll> pow;
	for(int i=0;i<n;i++){
		cin>>a[i];
		power+=a[i];
		pow.push_back(power);
	}
	ll hit=0;

	for(int i=0;i<q;i++){
		cin>>k[i];
		hit+=k[i];
		if(hit>=power){
			cout<<n<<endl;
			hit=0;
		}else{
			ll x= upper_bound(pow.begin(),pow.end(),hit)-pow.begin();
			cout<<n-x<<endl;
		}
	}

	return 0;
}

