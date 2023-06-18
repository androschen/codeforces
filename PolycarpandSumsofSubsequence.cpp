#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	ll b[8];
	
	for(int i=0;i<7;i++){
		cin>>b[i];
	}
	b[6]-=(b[0]+b[1]);
	for(int i=2;i<6;i++){
		if(b[6]-b[i]==0){
			cout<<b[i]<<" ";
			break;
		}
	}
	cout<<b[0]<<" "<<b[1]<<"\n";
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

