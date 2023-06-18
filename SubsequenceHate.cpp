#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s;
	cin>>s;
	int one=0,zero=0;
	for(int i=0;i<s.size();i++){
		one+=(s[i]=='1');
		zero+=(s[i]=='0');
	}
	int ans=min(one,zero);
	int pref0=0,pref1=0;
	for(int i=0;i<s.size();i++){
//		cout<<zero<<" "<<one<<"\n";
//		cout<<pref0<<" "<<pref1<<"PREF\n";
		if(s[i]=='0'){
			pref0++;
			zero--;
		}else{
			pref1++;
			one--;
		}
		ans=min(ans,pref1+zero);
		ans=min(ans,pref0+one);
	}
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

