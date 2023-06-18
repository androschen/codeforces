#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k;
		int a[n+1]={0};
		int b[n+1]={0};
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		
		for(int j=0;j<k;j++){
			if(a[j]<b[j]) swap(a[j],b[j]);
		}
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=a[j];
		}
		cout<<sum<<endl;
	}
	return 0;
}

