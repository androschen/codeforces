#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int check=0;
		for(int i=1;i<n-1;i++){
			if(a[i-1]!=a[i]&&a[i]!=a[i+1]){
				cout<<i+1<<endl;
				check=1;
				break;
			}
		}
		if(!check){
			if(a[0]!=a[1]){
				cout<<1<<endl;
			}else{
				cout<<n<<endl;
			}
		}
	}

	return 0;
}

