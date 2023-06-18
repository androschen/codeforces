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
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<n+1<<"\n";
	cout<<1<<" "<<n<<" 100000\n";
	for(int i=0;i<n;i++){
		cout<<2<<" "<<i+1<<" "<<a[i]+100000-i<<"\n";
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

