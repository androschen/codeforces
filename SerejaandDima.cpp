#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int card[n+1];
	int sums=0;
	int sumd=0;
	for(int i=0;i<n;i++){
		cin>>card[i];
	}
	int right=n-1;
	int left=0;
	int take=n;
	int turn=0;
	while(take>0){
		if(turn%2==0){
			if(card[left]>card[right]){
				sums+=card[left];
				left++;
			}
			else{
				sums+=card[right];
				right--;
			}
		}
		else{
			if(card[left]>card[right]){
				sumd+=card[left];
				left++;
			}
			else{
				sumd+=card[right];
				right--;
			}
		}
		take--;
		turn++;
	}
	cout<<sums <<" "<<sumd <<endl;
	
	return 0;
}
