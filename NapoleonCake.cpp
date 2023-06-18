#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,x;
	
	cin>>t;
	while(t--){
		cin>>n;
		int drench[n+1]={0};
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int idx=n-1;
		int left=n-1;
		while(1){
			int temp=a[left];
			if(temp>0){
				while(temp>0){
					drench[idx]=1;
					temp--;
					idx--;
					left--;
					if(idx==-1||a[left]>=temp){
						break;
					}
				}
				if(idx==-1) break;	
			}else{
				left--;
				idx--;
				if(idx==-1){
					break;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<drench[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
