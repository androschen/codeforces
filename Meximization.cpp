#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		vector<int>v;
		cin>>n;
		int a;
		int temp;
		int cnt[101]={0};
		for(int i=0;i<n;i++){
			cin>>a;
			cnt[a]++;
		}
	
		for(int i=0;i<101;i++){
			if(cnt[i]--){
				cout<<i<<" ";
			}
		}
		for(int i=0;i<101;i++){
			while(cnt[i]>0){
				cout<<i<<" ";
				cnt[i]--;
			}
		}
		cout<<endl;
	}

	return 0;
}

