#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		int x[n],y[n];
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
		bool check=false;
		for(int i=0;i<n;i++){
			int cnt=0;
			for(int j=0;j<n;j++){
				int xm=abs(x[i]-x[j])+abs(y[i]-y[j]);
				if(xm<=k) cnt++;
			}
			if(cnt>=n){
				cout<<"1"<<endl;
				check=true;
				break;
			}
		}
		if(!check){
			cout<<"-1"<<endl;
			
		}
	}

	return 0;
}

