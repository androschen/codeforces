#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	int t[n],c[n];
	int msg=0;
	int ms=0,bef;
	for(int i=0;i<n;i++){
		cin>>t[i]>>c[i];
		msg-=t[i]-bef;
		if(msg<0) msg=0;
		msg+=c[i];
		bef=t[i];
		ms=max(ms,msg);
	}
	int time=t[0]+c[0];
	
	for(int i=0;i<n-1;i++){
		if(time>=t[i+1]){
			time+=c[i+1];
		}else{
			time=t[i+1]+c[i+1];
		}
	}
	
	cout<<time<<" "<<ms<<endl;

	return 0;
}

