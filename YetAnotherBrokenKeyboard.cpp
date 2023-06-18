#include<bits/stdc++.h>

using namespace std;
#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007

int main(){
	int n,k;
	string s;
	cin>>n>>k>>s;
	
	char c[k];
	ll sum=0;
	map<char,int>m;
	for(int i=0;i<k;i++){
		cin>>c[i];
		m[c[i]]=1;
	}
	for(int i=0;i<n;i++){
		int  j=i;
		while(j<n&&m[s[j]]) j++;
		ll length=j-i;
		sum+=length*(length+1)/2;
		i=j;
	}
	
	cout<<sum<<"\n";
	
		
	return 0;
}

