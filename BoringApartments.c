#include<stdio.h>


int main(){
	int t,i;
	int number;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%d",&number);	
		int sum=0;
		int count=0;
		int j=1;
		int p=number%10;
		while(number>0){
			sum+=j;
			number/=10;
			count++;
			j++;
		}
		int press=(p-1)*10+sum;
		printf("%d\n",press);
	}
	return 0;
}
