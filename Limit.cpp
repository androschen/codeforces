#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,m;
	
	cin>>n>>m;
	int a[n+2],b[m+2];
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=m;i++){
		cin>>b[i];
	}
	if(n>m){
		if((a[0]>0&&b[0]<0)||(a[0]<0&&b[0]>0)){
			cout<<"-";
		}
		cout<<"Infinity\n";
	}else if(n<m){
		cout<<"0/1\n";
	}else{
		if((a[0]>0&&b[0]<0)||(a[0]<0&&b[0]>0)){
			cout<<"-";
		}
		if(a[0]<0) a[0]*=-1;
		if(b[0]<0) b[0]*=-1;
		
		int fpb=__gcd(a[0],b[0]);
		a[0]/=fpb;
		b[0]/=fpb;
		
		cout<<a[0]<<"/"<<b[0]<<"\n";
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

