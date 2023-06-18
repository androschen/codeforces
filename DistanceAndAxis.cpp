#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(n==0){
			cout<<k<<endl;
		}else if(k==0){
			if(n%2==0){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}
		}else{
			if(n<=k){
				cout<<k-n<<endl;
			}else{
				if(n%2==0&&k%2==0||n%2==1&&k%2==1){
					cout<<"0"<<endl;
				}else{
					cout<<"1"<<endl;
				}
			}
		}
	}
	return 0;
}
