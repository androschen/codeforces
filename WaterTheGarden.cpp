#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	while(t--){
		cin>>n>>k;
		int x[k];

		for(int i=0;i<k;i++){
			cin>>x[i];
		}
		int timeb[k+2]={0};
		timeb[0]=x[0];
		int left=1;
		timeb[left]=n-x[k-1]+1;
		left++;
		
		for(int i=0;i<k-1;i++){
			timeb[left]=1;
			int t2=x[i+1];
			int t1=x[i];
			while(t2-t1>1){
				timeb[left]++;
				t2--;
				t1++;
			}
			left++;
		}
		int minsec=0;;
		for(int i=0;i<k+2;i++){
			if(timeb[i]>minsec){
				minsec=timeb[i];
			}	
		}
		cout<<minsec<<endl;
	}

	return 0;
}

