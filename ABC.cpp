#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	
	string s;
	
	cin>>s;
	
	int one=0,zero=0;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			one++;
		}
		if(s[i]=='0'){
			zero++;
		}
	}
	if(one>0&&zero>0&&n>2){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
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

