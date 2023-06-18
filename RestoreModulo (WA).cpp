#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool checkz=false;
		for(int i=0;i<n-1;i++){
			if(a[i]!=a[i+1]) break;
			if(i==n-2) checkz=true;
		}
		if(checkz||n==1||n==2){
			cout<<"0"<<endl;
			continue;
		}
		int maxs=-1;
		for(int i=0;i<n-1;i++){
			if(maxs<a[i+1]-a[i]){
				maxs=a[i+1]-a[i];
			}
		}
		int modulo;
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				modulo=a[i]+maxs-a[i+1];
				break;
			}
		}
		bool check=true;
		for(int i=0;i<n-1;i++){
			if((a[i]+maxs)%modulo!=a[i+1]){
				check=false;
				break;
			}
		}
		if((a[0]+modulo)%modulo!=a[0]){
			check=false;
		}
		if(check&&modulo>maxs){
			cout<<modulo<<" "<<maxs<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}

	return 0;
}

