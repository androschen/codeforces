#include<stdio.h>

int prime(int n){
	int i,pr=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			pr=0;
			break;
		}
	}
	if(pr==1||n==2){
		return 1;
	}
	else{
		return 0;
	}
}


int main(){
	int n,m,i;
	
	int arr[51]={0};
	int pri=2;
	for(i=0;i<50;i++){
		while(prime(pri)==0){
			pri++;
		}
		arr[i]=pri;
		pri++;
	}
	
	scanf("%d %d",&n,&m);
	for(i=0;i<50;i++){
		if(arr[i]==n&&arr[i+1]==m){
			printf("YES\n");
			break;
		}
		if(i==49){
			printf("NO\n");
		}
	}
	return 0;
}
