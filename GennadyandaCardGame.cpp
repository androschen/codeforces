#include<iostream>

using namespace std;

int main(){
	string table;
	string card[6];
	
	cin>>table;
	
	int check=0;
	for(int i=0;i<5;i++){
		cin>>card[i];
		if(card[i][0]==table[0]||card[i][1]==table[1]){
			check=1;
		}
	}
	if(check==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
