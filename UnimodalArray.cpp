#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	
	cin>>n;
	int a[n];
	int maxs=0;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int count=0;
	int idxl=0;
	
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			count++;
		}else{
			idxl=i;
			break;
		}
	}
	int idxm=idxl;

	for(int i=idxl;i<n-1;i++){
		if(a[i]==a[i+1]){
			count++;
		}else{
			idxm=i;
			break;
		}
	}
	for(int i=idxm;i<n-1;i++){
		if(a[i]>a[i+1]){
			count++;
		}else{
			break;
		}
	}
	if(count==n-1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

