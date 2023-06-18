#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s;
	
	cin>>s;
	if(s.size()%2==0){
		for(int i=0;i<s.size()/2;i++){
			if(s[i]!=s[i+s.size()/2]){
				cout<<"NO\n";
				return;
			}
		}
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
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

