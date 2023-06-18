#include<bits/stdc++.h>

using namespace std;

int main(){
	int x,y,z,a,b,c;
	bool check=false;
	
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	
	int andrew=0,dmitry=0,michal=0;
	int left=0;
	if(a>=x){
		andrew=a-x;
		a-=x;
	}else{
		cout<<"NO"<<endl;
		return 0;
	}
	if(a+b>=y){
		dmitry=a+b-y;
		left=(a+b)-y;
	}else{
		cout<<"NO"<<endl;
		return 0;
	}
	if(left+c>=z){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
		return 0;
	}
		
	return 0;
}
