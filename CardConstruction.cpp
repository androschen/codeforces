#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 50007
int main(){
	int t,n;
	
	vector<int>pyr(MAX);
	
	for(int i=1;i<MAX;i++){
		pyr[i]=pyr[i-1]+(i*3)-1;
	}
	
	cin>>t;
	while(t--){
		cin>>n;
		int cntpyr=0;
		while(n>1){
			int idxpyr=upper_bound(pyr.begin(),pyr.end(),n)-pyr.begin()-1;
			
			n-=pyr[idxpyr];
			cntpyr++;
		}
		cout<<cntpyr<<endl;	
	}

	return 0;
}

