#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n,m;
	
	cin>>t;
	while(t--){
		cin>>n>>m;
		int sum=0;
		int cntneg=0;
		int neg=101;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]<0) cntneg++;
				neg=min(neg,abs(a[i][j]));
				sum+=abs(a[i][j]);
			}
		}
		if(cntneg%2==0){
			cout<<sum<<endl;
		}else{
			cout<<sum-(2*neg)<<endl;
		}
	}

	return 0;
}

