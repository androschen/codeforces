#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n,k;
	
	cin>>n>>k;
	int tab[n];
	int cnte=0,cnts=0;
	for(int i=0;i<n;i++){
		cin>>tab[i];
		if(tab[i]==1){
			cnte++;
		}else{
			cnts++;
		}
	}
	
	int maxs=0;
	for(int i=0;i<n;i++){
		int ce=cnte,cs=cnts;
		for(int j=i;j<n;j+=k){
			if(tab[j]==1){
				ce--;
			}else{
				cs--;
			}
		}
		for(int j=i-k;j>=0;j-=k){
			if(tab[j]==1){
				ce--;
			}else{
				cs--;
			}
		}
		maxs=max(maxs,abs(cs-ce));
	}	
	cout<<maxs<<endl;
	return 0;
}

