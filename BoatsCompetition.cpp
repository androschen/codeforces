#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int w[n];
		map<int,int>m;
		
		for(int i=0;i<n;i++){
			cin>>w[i];
			m[w[i]]++;
		}
		int maxi=0;
		for(int i=2;i<=2*n;i++){
			int total=0;
			for(auto j : m){
				int other=i-j.first;
				if(other>=1&&m.count(other)){
					total+=min(j.second,m[other]);
				}
			}
			total/=2;
			maxi=max(maxi,total);
		}
		cout<<maxi<<endl;
	}

	return 0;
}

