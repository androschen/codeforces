#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n,m;
	
	cin>>t;
	loop:
	while(t--){
		cin>>n>>m;
		int a[n][m]={};
		bool check=true;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				int adj= 4-(i==0)-(i==n-1)-(j==0)-(j==m-1);
				if(a[i][j]>adj){
					check=false;
				}
				a[i][j]=adj;
			}
		}
		if(check){
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
			}
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}

