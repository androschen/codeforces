#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define MAX 1000007

int main(){
	int t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		int even[n],odd[n];
		int lefte=0,lefto=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0){
				even[lefte]=a[i];
				lefte++;
			}else{
				odd[lefto]=a[i];
				lefto++;
			}
		}
		for(int i=0;i<lefte;i++){
			cout<<even[i]<<" ";
		}
		for(int i=0;i<lefto;i++){
			cout<<odd[i]<<" ";
		}		
		cout<<"\n";
		
	}

	return 0;
}

