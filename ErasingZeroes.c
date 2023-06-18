#include<stdio.h>
#include<string.h>

int main(){
	int t,i,j,k;
	char s[101];
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",&s);
		int len=strlen(s);
		int check=0;
		int sum=0;
		for(j=0;j<len;j++){
			int count=0;
			if(s[j]=='1'){
				for(k=j+1;k<len;k++){
					if(s[k]=='1'){
						check=1;
						break;
					}else{
						check=0;
						count++;
						j++;
					}
				}
			}
			if(check==0){
				count=0;
			}
			sum+=count;
		}
		printf("%d\n",sum);			
	}
	return 0;
}
