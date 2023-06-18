#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,m,k;
	
	cin>>n>>m>>k;
	int b[n];
	vector<int>gap;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	ll length=0;
	for(int i=1;i<n;i++){
		gap.push_back(b[i]-b[i-1]-1);
	}
	sort(gap.begin(),gap.end());
	while(gap.size()>0){
		if(gap.size()==n-k) break;
		b[n-1]-=gap.back();
		gap.pop_back();
	}
	cout<<b[n-1]-b[0]+1<<"\n";
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

