#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main(){
	int n;
	
	cin>>n;
	int a[n];
	int card[101]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
		card[a[i]]++;
	}
	int idx[n]={0};
	int left=0;
	int count=0;
	int cardvp[2]={};
	for(int i=0;i<101;i++){
		if(card[i]>0){
			idx[left]=i;
			cardvp[left]=card[i];
			count++;
			left++;
		}
	}
	if(count==2&&cardvp[0]==cardvp[1]){
		cout<<"YES"<<endl;
		cout<<idx[0]<<" "<<idx[1]<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}

