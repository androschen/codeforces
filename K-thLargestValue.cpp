#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,q,t,x;
	
	cin>>n>>q;
	
	int a[n];
	int count=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){
			count++;
		}
	}

	for(int i=0;i<q;i++){
		cin>>t>>x;
		if(t==1){
			if(a[x-1]==1){
				count--;
			}else{
				count++;
			}
			a[x-1]=1-a[x-1];
		}else{
			if(count>=x){
				cout<<"1"<<endl;
			}else{
				cout<<"0"<<endl;
			}
		}
	}
	return 0;
}
