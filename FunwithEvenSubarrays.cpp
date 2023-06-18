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
	map<int,int>mp,all;
	for(int i=0;i<n;i++){
		cin>>a[i];
		all[a[i]]++;
	}
	
	if(all.size()==1){
		cout<<0<<"\n";
	}else{

		int cnt=0;
		int loop=1;
		reverse(a,a+n);

		while(loop<n){
			if(a[loop]==a[0]){
				loop++;
				continue;
			}
			cnt++;
			loop*=2;
		}
		cout<<cnt<<"\n";
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

