#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	int day[n];
	int h[n*n],v[n*n];
	int ho[51]={},vo[51]={};
	int idx=0;
	for(int i=0;i<n*n;i++){
		cin>>h[i]>>v[i];
		if(ho[h[i]]==0&&vo[v[i]]==0){
			day[idx]=i+1;
			idx++;
			ho[h[i]]=1;
			vo[v[i]]=1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<day[i]<<" ";
	}

	return 0;
}

