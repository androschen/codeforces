#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 111111111
using namespace std;

void solve(){
	int x;
	cin>>x;
	int oneT=x%11;
	int left=x-(111*oneT);
	
	if((left%11==0&&left>0)||(x%111==0||x%11==0)) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
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

