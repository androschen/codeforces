#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,t;
	
	cin>>n>>t;
	int s[n],d[n];
	int bus=-1;
	for(int i=0;i<n;i++){
		cin>>s[i]>>d[i];
	}
	
	for(int i=0;i<n;i++){
		while(s[i]<t){
			s[i]+=d[i];
		}
	}
	int min=100001;
	for(int i=0;i<n;i++){
		if(s[i]==t){
			bus=i+1;
			break;
		}else{
			if(s[i]-t<min){
				min=s[i]-t;
				bus=i+1;
			}
		}
	}
	cout<<bus<<endl;

	return 0;
}

