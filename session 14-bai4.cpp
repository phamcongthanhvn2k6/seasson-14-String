#include<stdio.h>
#include<string.h>

	int main(){
		char chuoi[100];
		char kytu;
		int dem;
		
		printf("Nhap vao mot chuoi: ");
		fgets(chuoi,sizeof(chuoi),stdin);
		
		size_t len = strlen(chuoi);
		
		if(len>0 && chuoi[len-1] == '\n'){
			chuoi[len-1] == '\0'; 
		}
		
		printf("Nhap vao mot ky tu: ");
		scanf("%s",&kytu);
		
		for(int i=0; i< strlen(chuoi);i++){
			if(chuoi[i] == kytu){
				dem++;
			}
		}
		
		printf("Trong chuoi %s Co %d lan xuat hien trong chuoi",chuoi,dem);
		
		return 0;
	}
