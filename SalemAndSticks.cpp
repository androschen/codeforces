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
	int t=0;
	int mini=MAX;
	for(int i=1;i<101;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(a[j]>i){
				sum+=abs(a[j]-(i+1));
			}else if(a[j]<i){
				sum+=abs(a[j]-(i-1));
			}
		}
		if(sum<mini){
			mini=sum;
			t=i;
		}
	}
	cout<<t<<" "<<mini<<endl;
	return 0;
}

