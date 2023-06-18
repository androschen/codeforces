#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

void solve(){
	int n;
	map<int,int>mp;
	cin>>n;
	int a[n*n+1];
	int matrix[n+1][n+1]={};
	for(int i=0;i<n*n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i=0;i<(n+1)/2;i++){
		for(int j=0;j<(n+1)/2;j++){
			bool check=false;
			for(auto x:mp){
				if(x.second<4&&x.second>=2) check=true;
			}
			for(auto &x: mp){
				if(x.second==1&&i==n-i-1&&j==n-j-1){
					x.second--;
					matrix[i][j] = matrix[i][n-j-1] = x.first;
					break;
				}else if(i==n-i-1||j==n-j-1){
					if((x.second<4&&x.second>1)||(x.second>=4&&!check)){
						x.second-=2;
						matrix[i][j] = matrix[i][n-j-1] = x.first;
						matrix[n-i-1][j]= matrix[n-i-1][n-j-1]= x.first;
						break;
					}
				}else if(x.second>=4){
					x.second-=4;
					matrix[i][j] = matrix[i][n-j-1] = x.first;
					matrix[n-i-1][j] = matrix[n-i-1][n-j-1] = x.first;
					break;	
				}
			}
		}
	}
	bool ans=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0) ans=false;
		}
	}
	if(!ans){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
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

