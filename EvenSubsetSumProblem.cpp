#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		int even;
		bool check=true;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0){
				even=i+1;
				check=false;
			}
		}
		if(check){
			if(n<=1){
				cout<<"-1"<<endl;
			}else{
				cout<<"2"<<endl;
				cout<<1<<" "<<2<<endl;
			}
		}else{
			cout<<"1"<<endl;
			cout<<even<<endl;
		}
		
	}
	return 0;
}
