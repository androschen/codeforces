#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long int sum=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]<=a[i-1]){
			a[i-1]=a[i]-1;
			sum+=a[i];
			if(a[i]-1==0){
				break;
			}
		}else{
			sum+=a[i];
			
		}
	}
	cout<<sum<<endl;
	return 0;
}

