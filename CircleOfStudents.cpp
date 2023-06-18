#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int q,n;
	
	cin>>q;
	while(q--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool check=true;
		for(int i=0;i<n-1;i++){
			if(!(abs(a[i]-a[i+1])==1||a[i]==1&&a[i+1]==n||a[i]==n&&a[i+1]==1)){
				cout<<"NO"<<endl;
				check=false;
				break;
			}
		}
		if(check){
			cout<<"YES"<<endl;
		}
	}

	return 0;
}

