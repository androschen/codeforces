#include<iostream>

using namespace std;

int main(){
	string guest,host,pile;
	int alfa[27]={0};
	int permuted[27]={0};
	
	cin>>guest;
	cin>>host;
	cin>>pile;
	
	int index;
	for(int i=0;i<guest.size();i++){
		index=guest[i]-65;
		alfa[index]++;
	}
	for(int i=0;i<host.size();i++){
		index=host[i]-65;
		alfa[index]++;
	}
	for(int i=0;i<pile.size();i++){
		index=pile[i]-65;
		permuted[index]++;
	}
	int count=0;
	for(int i=0;i<26;i++){
		if(alfa[i]==permuted[i]){
			count++;
		}
	}
	if(count==26){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
