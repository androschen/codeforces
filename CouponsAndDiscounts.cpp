#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++){
		if(a[i]%2==1){
			a[i+1]--;
			if(a[i+1]<0){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	if(a[n-1]%2==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

