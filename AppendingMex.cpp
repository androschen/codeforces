#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool check=true;
	int idx;
	int maxs=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>maxs+1||a[i]>i){
			check=false;
			idx=i+1;
			break;
		} 
		if(a[i]>maxs){
			maxs=a[i];
		}
	}
	if(check){
		cout<<"-1"<<endl;
	}else{
		cout<<idx<<endl;
	}
	return 0;
}

