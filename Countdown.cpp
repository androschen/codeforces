#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	string s;
	
	cin>>n;
	cin>>s;
	int cnt=0,sum=0;
	for(int i=0;i<n;i++){
		if(s[i]!='0'&&i<n-1) cnt++;
		sum+=s[i]-'0';
	}
	cout<<sum+cnt<<"\n";
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

