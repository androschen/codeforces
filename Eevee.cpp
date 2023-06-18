#include<bits/stdc++.h>

using namespace std;

int main(){
	string pokemon[]={"vaporeon","jolteon","flareon","espeon","umbreon","leafeon", "glaceon", "sylveon"};
	
	string eve;	
	int n;
	
	cin>>n;
	cin>>eve;
	int idx=-1;
	int max=0;
	for(int i=0;i<8;i++){
		int count=0;
		if(pokemon[i].size()==n){
			if(idx==-1) idx=i;
			for(int j=0;j<n;j++){
				if(eve[j]==pokemon[i][j]){
					count++;	
				}			
			}
		}
		if(count>max){
			max=count;
			idx=i;
		}
	}
	cout<<pokemon[idx]<<endl;
	
	return 0;
}

