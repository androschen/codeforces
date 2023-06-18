#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,x[4];
	
	int max=0;
	for(int i=0;i<4;i++){
		cin>>x[i];
		if(x[i]>max){
			max=x[i];
		}
	}
	sort(x,x+4);
	a=max-x[2];
	b=max-x[1];
	c=max-x[0];
	cout<<a <<" "<<b <<" "<<c <<endl;
	
	return 0;
}
