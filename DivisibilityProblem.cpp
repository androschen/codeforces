#include<iostream>

using namespace std;

int main(){
	int t;
	long long int a,b;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		int count=0;
		if(a%b==0){
			count=0;
		}
		else{
			count=b-(a%b);
		}
		cout<<count<<endl;
	}
	return 0;
}
