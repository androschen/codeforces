#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int b[n];
		int a[n];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int loop=n/2;
		if(n%2==1){
			loop++;
		}
		int left=0;
		int right=n-1;
		int idx=0;
		while(loop>0){
			a[left]=b[idx];
			left++;
			idx++;
			if(n%2==1&&loop==1) break;
			a[left]=b[right];
			right--;
			left++;
			loop--;
		}
			
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
