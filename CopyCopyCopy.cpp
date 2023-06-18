#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,t,j,k;
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		
		set<int>a;
		int index=0;
		int count=0;
		for(j=0;j<n;j++){
			int x;
			cin>>x;
			a.insert(x);
		}	
		cout<<a.size()<<endl;	
	}
	return 0;
}
