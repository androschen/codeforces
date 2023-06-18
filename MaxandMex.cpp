#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		set<int>myset;
		cin>>n>>k;
		int a[n];
		int m=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>m){
				m=a[i];
			}
			myset.insert(a[i]);
		}
		sort(a,a+n);
		int count=0;
		bool check=true;
		if(k>0){
			for(int i=0;i<n;i++){
				if(i!=a[i]){
					check=false;
					myset.insert(ceil((double)(m+i)/2));
					break;
				}
			}
		}
		count=myset.size();
		if(check){
			count+=k;
		}
		cout<<count<<endl;
	}
	return 0;
}
