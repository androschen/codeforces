#include<iostream>

using namespace std;

int main(){
	string n;
	
	cin>>n;
	int one=0;
	int four=0;
	int other=0;
	int len=n.size();	
	int max=0;
	int count=0;
	for(int i=0;i<len;i++){
		if(n[i]=='1'){
			one++;
			count=0;
		}else if(n[i]=='4'){
			four++;
			count++;
			if(count>max){
				max=count;
			}
		}else{
			other++;
			count=0;
		}
	}
	if(other>0||n[0]=='4'||max>2){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
	return 0;
}
