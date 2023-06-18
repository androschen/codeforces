#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n,m;
	
	cin>>n>>m;
	
//	int xRahul=(n+1)/2;
//	int yRahul=(m+1)/2;
//	
//	cout<<xRahul<<" "<<yRahul<<"\n";
	
	vector<int> v;
//	int 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int ans=max(i,n-i-1)+max(j,m-j-1);
			v.push_back(ans);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
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

