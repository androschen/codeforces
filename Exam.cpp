#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin>>n;
	
	if(n<=4){
		if(n==4){
			cout<<"4"<<endl;
			cout<<"3 1 4 2"<<endl;
		}else if(n==3){
			cout<<"2"<<endl;
			cout<<"1 3"<<endl;
		}else{
			cout<<"1"<<endl;
			cout<<"1"<<endl;
		}
	}else{
		cout<<n<<endl;
		for(int i=1;i<=n;i+=2){
			cout<<i<<" ";
		}
		for(int i=2;i<=n;i+=2){
			cout<<i<<" ";
		}
	}
	return 0;
}
