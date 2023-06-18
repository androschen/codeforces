#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int q,n,k;
	
	cin>>q;
	while(q--){
		cin>>n>>k;
		int a[n];
		int cntodd=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==1) cntodd++;
		}
		if(cntodd<k||cntodd%2!=k%2){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			if(a[i]%2==1&&k>1){
				cout<<i+1<<" ";
				k--;
			}  
		}
		cout<<n<<endl;
	}

	return 0;
}

