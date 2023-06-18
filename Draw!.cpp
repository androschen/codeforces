#include<bits/stdc++.h>

#define PI 3.14159265358979323846
#define ll long long int
#define ull unsigned long long int
#define MAX 1000007
using namespace std;

int main(){
	int n;
	
	cin>>n;
	int a[n],b[n];
	map<int,int>score;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	int draw=0;
	for(int i=0;i<n;i++){
		int x=0;
		if(i>0){
			x=max(a[i-1],b[i-1]);
		}
		int y=min(a[i],b[i]);
		
		if(y>=x){
			draw+=y-x+1;
		}
		if(a[i-1]==b[i-1]&&i>0){
			draw--;
		}
	}
	cout<<draw<<endl;

	return 0;
}

