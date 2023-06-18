#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int b[n];
	map<int,ll>mp;
	for(int i=0;i<n;i++){
		cin>>b[i];
		mp[b[i]-i]+=b[i];
	}
	ll maks=0;
	for(auto x: mp){
		if(x.second>maks){
			maks=x.second;
		}
	}
	
	cout<<maks<<endl;
	

	return 0;
}

