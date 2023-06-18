#include<iostream>

using namespace std;

int main(){
	long long int n,m,i;
	
	cin>>n>>m;
	long long int a[m];
	for(i=0;i<m;i++){
		cin>>a[i];
	}
	long long int count=a[0]-1;
	for(i=0;i<m-1;i++){
		if(a[i]>a[i+1]){
			count+=n-(a[i]-a[i+1]);
		}
		else if(a[i]<a[i+1]){
			count+=a[i+1]-a[i];
		}
	}
	cout<<count<<endl;
	
	return 0;
}
