#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	
	cin>>n>>k;
	int f[n];
	int max=0;
	for(int i=0;i<n;i++){
		cin>>f[i];
	}
	sort(f,f+n,greater<int>());
	
	int time=0;
	for(int i=0;i<n;i+=k){
		time+=2*(f[i]-1);
	}
	cout<<time<<endl;
	return 0;
}
