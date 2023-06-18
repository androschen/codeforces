#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(k==1){
			cout<<n-1<<endl;
		}else if(k==2){
			cout<<n-1<<endl;
			cout<<"1"<<" ";
		}else{
			int count=n-k;
			bool check=false;
			for(int i=1;i<=k-1;){
				if(check){
					break;
				}
				for(int j=k-1;j>=1;){
					if(i==j&&k%2==0){
						count++;
						check=true;
						break;
					}else if(i==j-1&&k%2==1){
						count++;
						check=true;
						break;
					}
					if(i+j==k){
						count++;
					}else{
						count+=2;
					}
					i++;
					j--;
				}
			}
			cout<<count<<endl;		
			check=false;
			for(int i=1;i<=k-1;){
				if(check){
					break;
				}
				for(int j=k-1;j>=1;){
					if(i==j&&k%2==0){
						cout<<j<<" ";
						check=true;
						break;
					}else if(i==j-1&&k%2==1){
						cout<<j<<" ";
						check=true;
						break;
					}
					if(i+j==k){
						cout<<j<<" ";
					}else{
						cout<<i<<" "<<j<<" ";
					}
					i++;
					j--;
				}
			}		
		}
		if(n>1){
			for(int i=k+1;i<=n;i++){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
