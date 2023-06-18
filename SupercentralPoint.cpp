#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n],y[n];
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	int supercentral=0;
	for(int i=0;i<n;i++){
		int count[4]={0};
		for(int j=0;j<n;j++){
			if(i!=j){
				if(x[i]==x[j]&&y[i]>y[j]){
					count[0]++;
				}else if(x[i]==x[j]&&y[i]<y[j]){
					count[1]++;
				}else if(x[i]>x[j]&&y[i]==y[j]){
					count[2]++;
				}else if(x[i]<x[j]&&y[i]==y[j]){
					count[3]++;
				}
			}
		}
		for(int i=0;i<4;i++){
			if(count[i]==0) break;
			if(i==3){
				supercentral++;			
			}
		}
	}
	cout<<supercentral<<endl;;

	return 0;
}

