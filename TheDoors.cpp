#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin>>n;
	int door[n];
	int left=0,right=0;
	for(int i=0;i<n;i++){
		cin>>door[i];
		if(door[i]==0){
			left++;
		}else{
			right++;
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(door[i]==0){
			left--;
			count++;
		}else{
			right--;
			count++;
		}
		if(left==0||right==0) break;
	}
	
	cout<<count<<endl;
	return 0;
}

