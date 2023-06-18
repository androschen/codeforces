#include<iostream>

using namespace std;

int main(){
	string x;
	string number;
	
	cin>>x;
	for(int i=0;i<x.size();i++){
		if(x[i]>9-x[i]+'0'+'0'&&9-x[i]+'0'+'0'){
			number+=9-x[i]+'0'+'0';
		}else{
			number+=x[i];
		}
	}
	if(number[0]=='0'){
		number[0]='9';
	}
	cout<<number<<endl;

	
	return 0;
}
