#include<stdio.h>
#include<string.h>

void xoa(char chuoi[],char kytu){
	int len = strlen(chuoi);
	int j=0;
	
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i] != kytu){
			chuoi[j++] = chuoi[i];
		}
	}
	chuoi[j] ='\0';
}

int main(){
	char kytu;
	char chuoi[100];
	printf("Nhap Mot Chuoi vao: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	
	size_t len=strlen(chuoi);
	if(len >0 && chuoi[len-1] == '\n'){
		chuoi[len-1] = '\0';
	}
	printf("Chuoi truoc Khi Xoa Ky Tu La: %s\n",chuoi);
	printf("Nhap Mot ky tu de xoa: ");
	scanf("%s",&kytu);
	
	xoa (chuoi,kytu);
	
	printf("Chuoi Sau Khi Xoa La: %s\n",chuoi);
	
	return 0;
}
