#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,k;
	
	cin>>n>>k;
	int a[n];
	
	int totalVT=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		totalVT+=a[i];
	}
	
	int postTime=totalVT/k;
	
	if(totalVT%k!=0||k==2&&a[0]%k!=0){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
		int post=0;
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=a[i];
			post++;
			if(sum==postTime){
				cout<<post<<" ";
				post=0;
				sum=0;
			}
		}
	}

	return 0;
}

