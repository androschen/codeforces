#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,i,j,n;
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		int a[n+1];
		for(j=0;j<n;j++){
			cin>>a[j];
		}
		
		sort(a,a+n, greater<int>());
	
		int count=0;
		for(j=0;j<n-1;j++){
			bool check=false;
			for(int k=j+1;k<n;k++){
				if(a[j]>a[k]){
					check=true;
					break;
				}
			}
			if(check==true){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
