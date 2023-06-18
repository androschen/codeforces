#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,t;
	
	cin>>n>>t;
	int a[n+1]={0};
	bool check=false;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	int position=1;
	
	for(int i=0;i<n-1;){
		if(position==t){
			check=true;
		}
		position+=a[i];
		i+=a[i];
		if(position==t) check=true;
	}
	string result= (check) ? "YES" : "NO";
	
	cout<<result<<endl;
	return 0;
}
