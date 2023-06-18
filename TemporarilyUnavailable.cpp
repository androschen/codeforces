#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int a,b,c,r;
	
	cin>>a>>b>>c>>r;
	int dist=b-a;
	if(a>b) swap(a,b);
	if(c+r>=b&&c-r<=a){
		dist=0;
	}else if(c+r>=b&&c-r<=b){
//		cout<<"a";
		dist=c-r-a;
	}else if(c+r>=a&&c-r<=a){
//		cout<<"B";
		dist=b-(c+r);
	}else if(c+r<=b&&c-r>=a){
//		cout<<"s";
		dist=b-a-2*r;
	}
	if(dist<0) dist*=-1;
	cout<<dist<<"\n";
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

