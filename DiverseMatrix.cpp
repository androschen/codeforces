#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int r,c;
	
	cin>>r>>c;
	if(r==1&&c==1){
		cout<<0<<"\n";
		return;
	}
	
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(c>1){
				cout<<i*(j+r)<<" ";
			}else{
				cout<<i+j<<" ";
			}
		}
		cout<<"\n";
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
//    cin>>t;
    while(t--){
		solve();
    }


	return 0;
}

