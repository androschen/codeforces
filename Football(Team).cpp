#include<iostream>

using namespace std;

int main(){
	int n,i;
	
	cin>>n;
	string team[n+1],temp[n+1];
	int index=0;
	int count[n]={1};
	for(i=0;i<n;i++){
		cin>>team[i];
		for(int j=0;j<n;j++){
			if(team[i]==temp[j]){
				count[j]++;
				break;
			}
			if(j==n-1){
				temp[index]=team[i];
				index++;
			}
		}
	}
	int max=0;
	string winner;
	for(i=0;i<index;i++){
		if(count[i]>=max){
			winner=temp[i];
			max=count[i];
		}
	}
	cout<<winner<<endl;
	
	return 0;
}
