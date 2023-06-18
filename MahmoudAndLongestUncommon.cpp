#include<iostream>

using namespace std;

int main(){
	string a,b;
	
	cin>>a;
	cin>>b;
	int len1=a.size();
	int len2=b.size();
	int max=len1;
	if(len2>len1){
		max=len2;
	}
	
	if(a==b){
		cout<<"-1"<<endl;
	}else{
		cout<<max<<endl;
	}
	return 0;
}
