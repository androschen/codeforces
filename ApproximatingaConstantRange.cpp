#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxRange=0;
	int pos=0;
	while(pos<n-1){
		set<int>mset;
		int range=0;
		int c=1,j=0;
		for(j=pos;j<n;j++){
			mset.insert(a[j]);
			if(mset.size()==2&&c==1){
				pos=j;
				c=0;	
			}
			if(mset.size()>2) break;
			range++;
//			cout<<"perJ"<<pos<<" "<<j<<endl;
		}
		maxRange=max(maxRange,range);
		if(j>=n) break;
//		cout<<"perI"<<pos<<endl;
	}
	
	cout<<maxRange<<endl;

	return 0;
}

