#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	ll n,k;
	
	cin>>n>>k;
	
	if(n>=k){
		cout<<1<<endl;
	}else{
		if(k%n>0){
			cout<<k/n+1<<endl;
		}else{
			cout<<k/n<<endl;
		}
	}
	

	return 0;
}

