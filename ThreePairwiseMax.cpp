#include<iostream>

using namespace std;

int main(){
	int t,x,y,z;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>x>>y>>z;
		int a=min(x,y);
		int b=min(x,z);
		int c=min(y,z);
		int maks=max(max(x,y),z);
		if(y==maks&&x==maks||y==maks&&z==maks||x==maks&&z==maks){
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
