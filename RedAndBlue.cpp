#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,m;
	
	cin>>t;
	while(t--){
		cin>>n;
		int r[n];
		int sumr=0;
		int maxr=0;
		for(int i=0;i<n;i++){
			cin>>r[i];
			sumr+=r[i];
			maxr=max(maxr,sumr);
		}
		cin>>m;
		int sumb=0;
		int b[m];
		int maxb=0;
		for(int i=0;i<m;i++){
			cin>>b[i];
			sumb+=b[i];
			maxb=max(maxb,sumb);
		}
		cout<<maxb+maxr<<endl;
	}
	return 0;
}

