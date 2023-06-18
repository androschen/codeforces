#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,m,k;
	
	cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n,greater<int>());
	int socket=k;
	int supply=0;
	if(m>k){
		for(int i=0;i<n;i++){
			if(socket>=m) break;
			socket+=a[i]-1;
			supply++;
		}
	}
	if(socket>=m){
		cout<<supply<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}

