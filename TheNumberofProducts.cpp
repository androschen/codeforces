#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	int a[n];
	int bal=1;
	ll pos=1,neg=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0) bal*=-1;
		if(bal==1){
			pos++;
		}else{
			neg++;
		}
	}
	cout<<pos*neg<<" "<<n*(n+1)/2-pos*neg<<"\n";
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

