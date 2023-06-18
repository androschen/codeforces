#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	string s;
	
	int a=0,b=0,c=0;
	
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A') a++;
		else if(s[i]=='B') b++;
		else c++;
	}
	if(a+c==b&&s.size()%2==0){
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

