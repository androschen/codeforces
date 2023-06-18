#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	
	cin>>n>>k;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	
	int max=k;
	int left=0;
		int min=0;
		int minus=0;
	while(k--){
		
		while(left<n && a[left]-min==0){
			left++;
		}
		
		if(left<n&&a[left]>0){
			cout<<a[left]-min<<endl;
			min=a[left];
		}
		else{
			cout<<"0"<<endl;
		}
	}

	return 0;
}

