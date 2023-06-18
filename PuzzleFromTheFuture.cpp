#include<iostream>

using namespace std;

int main(){
	int t,n,i,j;
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		string biner;
		string result="1";
		cin>>biner;
		int left=biner[0]-'0'+1;
		for(j=1;j<n;j++){
			if(biner[j]-'0'+1!=left){
				result+='1';
				left= biner[j]-'0'+1;
			}else{
				left=biner[j]-'0';
				result+='0';
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
