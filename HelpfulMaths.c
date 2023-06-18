#include<stdio.h>

int main(){
	char tambah[101];
	int i,j,angka[101];
	
	scanf("%s",&tambah);
	int len=strlen(tambah);
	int ja=0;
	for(i=0;i<len;i++){
		if(tambah[i]=='1'){
			angka[ja]=tambah[i]-48;
			ja++;
		}
		if(tambah[i]=='2'){
			angka[ja]=tambah[i]-48;
			ja++;
		}
		if(tambah[i]=='3'){
			angka[ja]=tambah[i]-48;
			ja++;
		}
	}
	
		for(i=0;i<ja-1;i++){
			for(j=0;j<ja-1;j++){
				if(angka[j+1]<angka[j]){
					int temp=angka[j];
					angka[j]=angka[j+1];
					angka[j+1]=temp;
				}
			}
		}
	
	for(i=0;i<ja;i++){
		if(i==ja-1){
		printf("%d\n",angka[i]);
			break;
		}
		else{
			printf("%d",angka[i]);
			printf("+");
		}
	}
	return 0;
}
