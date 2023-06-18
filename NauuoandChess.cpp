#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,m;
	
	cin>>n;
	
	m=n/2+1;
	cout<<m<<endl;
	for(int i=1;i<=m;i++){
		cout<<i<<" "<<1<<endl;		
	}
	for(int i=2;i<=n-m+1;i++){
		cout<<m<<" "<<i<<endl;
	}
	return 0;
}

