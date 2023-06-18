#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s,temp;
	
	cin>>s;
	int maxi=0;

	for(int i=s.size()-1;i>0;i--){
		int sum= s[i]-'0'+s[i-1]-'0';
		if(sum>=10){
			s[i-1]=sum/10+'0';
			s[i]=sum%10+'0';
			cout<<s<<"\n";
			return;
		}
	
	}
	
	string ans="";
	ans+=s[0]+s[1]-'0';
	for(int i=2;i<s.size();i++) ans+=s[i];
	
	cout<<ans<<"\n";
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

