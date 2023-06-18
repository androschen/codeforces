#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%4==2||i%4==3){
			cout<<"b";
		}else{
			cout<<"a";
		}
	}

	return 0;
}

