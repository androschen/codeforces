#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k1,k2,w,b;
	
	cin>>t;
	while(t--){
		cin>>n>>k1>>k2;
		cin>>w>>b;
		if(n>=w+b){
			if((w<=(k1+k2)/2&&b<=(2*n-(k1+k2))/2)){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

