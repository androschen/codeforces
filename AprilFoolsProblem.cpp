#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,k;
	
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
	
	cout<<sum<<endl;

	return 0;
}

