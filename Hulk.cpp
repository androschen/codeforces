#include<iostream>

using namespace std;

int main(){
	int n,i;
	string x;
	
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==1){
			x+="I hate";
		}
		else if(i%2==0){
			x+="I love";
		}
		if(i==n){
			x+=" it";
		}
		if(i<n){
			x+=" that ";
		}
		
	}
	cout<<x<<endl;
	
	return 0;
}
