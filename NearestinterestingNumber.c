#include<stdio.h>

int main(){
	int a;
	
	scanf("%d",&a);
	
	int x=a;
	int sum=0;
	while(x>0){
		int temp=x;
		temp=temp%10;
		sum+=temp;
		x/=10;
	}
	if(sum%4==0){
		printf("%d\n",a);
		return 0;
	}
	
	while(1){
		a++;
		x=a;
		sum=0;
		while(x>0){
			int temp=x;
			temp=temp%10;
			sum+=temp;
			x/=10;
		}
		if(sum%4==0){
			break;
		}
	}
	printf("%d\n",a);
	
	return 0;
}
