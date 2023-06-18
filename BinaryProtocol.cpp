#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	string s;
	
	cin>>n;
	cin>>s;
	ll ans=0;
	int i=0;
	while(i<n){
		int cnt=0;
		int cntz=-1;
		if(s[i]=='1'){
			while(s[i]=='1'&&i<n){
				cnt++;
				i++;
			}
			ans+=cnt;
			if(i<n)	ans*=10;	
		}else{
			while(s[i]=='0'&&i<n){
				cntz++;
				i++;
			}
			ans*=pow(10,cntz);
		}
	}
	cout<<ans<<endl;

	return 0;
}

