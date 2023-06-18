#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		
		int cnt=0;
		for(int i=1;i<=n;i=i*10+1){
			cnt+=min(n/i,9);
		}
		cout<<cnt<<endl;
		
	}

	return 0;
}

