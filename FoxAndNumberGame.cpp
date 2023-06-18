#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int n;
	
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}

	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int a=x[i],b=x[j],r;
			do{
				r=a%b;
				a=b;
				b=r;
			}while(r!=0);
			x[i]=x[j]=a;
		}
	}
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	cout<<sum<<endl;

	return 0;
}

