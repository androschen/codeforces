#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	string s[n];
	map<string,int>mp;
	for(int i=0;i<n-2;i++){
		cin>>s[i];
	}
	string x=s[0];
	for(int i=1;i<n-2;i++){
		if(x[x.size()-1]==s[i][0]){
			x+=s[i][1];
		}else{
			x+=s[i];
		}
	}
	while(x.size()<n) x+="a";
	cout<<x<<"\n";
		
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

