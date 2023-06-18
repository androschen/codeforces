#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	
	int swc[4][4];
	int lamp[4][4]={1};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>swc[i][j];
		}
	}
	lamp[0][0]=(swc[0][0]+swc[0][1]+swc[1][0])%2==0 ? 1 : 0;
	lamp[0][1]=(swc[0][0]+swc[0][1]+swc[1][1]+swc[0][2])%2==0 ? 1 : 0;
	lamp[0][2]=(swc[0][2]+swc[0][1]+swc[1][2])%2==0 ? 1 : 0;
	
	lamp[1][0]=(swc[1][0]+swc[0][0]+swc[1][1]+swc[2][0])%2==0 ? 1 : 0;
	lamp[1][1]=(swc[1][1]+swc[1][0]+swc[0][1]+swc[2][1]+swc[1][2])%2==0 ? 1 : 0;
	lamp[1][2]=(swc[1][2]+swc[0][2]+swc[1][1]+swc[2][2])%2==0 ? 1 : 0;
	
	lamp[2][0]=(swc[2][0]+swc[1][0]+swc[2][1])%2==0 ? 1 : 0;
	lamp[2][1]=(swc[2][1]+swc[1][1]+swc[2][0]+swc[2][2])%2==0 ? 1 : 0;
	lamp[2][2]=(swc[2][2]+swc[1][2]+swc[2][1])%2==0 ? 1 : 0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<lamp[i][j];
		}
		cout<<"\n";
	}

	return 0;
}

