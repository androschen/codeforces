#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,k;
	
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int score=0;
	sort(a,a+n);
	for(int i=0;i<n-2*k;i++){
		score+=a[i];
	}
	for(int i=n-2*k;i<n-k;i++){
		score+=a[i]/a[i+k];
	}
	cout<<score<<"\n";
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

