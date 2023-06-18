#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

ll getGCD(ll a,ll b){
	if(b==0) return a;
	return getGCD(b,a%b);
}

int main(){
	ll x;
	cin>>x;
	
	int sqr=sqrt(x);
	for(int i=sqr;i>=1;i--){
		if(x%i==0){
			ll pair=x/i;
			if(getGCD(pair,i)==1){
				cout<<i<<" "<<pair<<endl;
				return 0;
			}
		}
	}

	return 0;
}

