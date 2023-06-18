#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int t,n,m;
	
	cin>>t;
	while(t--){
		cin>>n;
		int p[n];
		ll evenP=0,oddP=0;
		for(int i=0;i<n;i++){
			cin>>p[i];
			if(p[i]%2==0){
				evenP++;
			}else{
				oddP++;
			}
		}
		cin>>m;
		int q[m];
		ll evenQ=0,oddQ=0;
		for(int i=0;i<m;i++){
			cin>>q[i];
			if(q[i]%2==0){
				evenQ++;
			}else{
				oddQ++;
			}
		}
		ll cnt=evenP*evenQ+oddP*oddQ;
		
		cout<<cnt<<endl;
	}

	return 0;
}

