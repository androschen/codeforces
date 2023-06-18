#include<stdio.h>

int main(){
	int n,i;
	
	scanf("%d",&n);
	int arr[n];
	int idxe,idxo,even=0,odd=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			even++;
			idxe=i+1;
		}else{
			odd++;
			idxo=i+1;
		}
	}
	if(odd==1){
		printf("%d\n",idxo);
	}
	else if(even==1){
		printf("%d\n",idxe);
	}
	return 0;
}
