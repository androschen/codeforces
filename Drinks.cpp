#include<iostream>

using namespace std;

int main(){
	int n,i;
	
	cin>>n;
	int juice[n];
	double sum=0;
	for(i=0;i<n;i++){
		cin>>juice[i];
		sum+=juice[i];
	}
	double v=(double)sum/n;
	
	cout<<v<<endl;
	
	return 0;
}
