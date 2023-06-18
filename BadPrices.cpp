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
		int mins=a[n-1];
		int cnt=0;
		for(int i=n-2;i>=0;i--){
			if(a[i]>mins){
				cnt++;
			}
			mins=min(mins,a[i]);
		}
		cout<<cnt<<endl;
	}

	return 0;
}

