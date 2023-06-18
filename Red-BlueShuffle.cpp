#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		char r[n];
		char b[n];
		for(int i=0;i<n;i++){
			cin>>r[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int countr=0,countb=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(r[i]>b[i]) countr++;
				else if(r[i]<b[i]) countb++;
			}
		}
		if(countr>countb){
			cout<<"RED"<<endl;
		}else if(countr<countb){
			cout<<"BLUE"<<endl;
		}else{
			cout<<"EQUAL"<<endl;
		}
	}
	return 0;
}
