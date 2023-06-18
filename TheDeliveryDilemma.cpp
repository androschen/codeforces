#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n],idxm=-1,maxs=0;
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			maxs=max(maxs,a[i]);
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			v.push_back(make_pair(a[i],b[i]));
		}
		sort(v.rbegin(),v.rend());
		
		for(int i=0;i<n;i++){
			a[i]=v[i].first;
			b[i]=v[i].second;
		}
		int own=0;
		for(int i=0;i<n;i++){
			own+=b[i];
			if(a[i]<=own){
				maxs=max(a[i],own-b[i]);
				break;
			}
		}
		cout<<min(maxs,own)<<endl;
	}

	return 0;
}

