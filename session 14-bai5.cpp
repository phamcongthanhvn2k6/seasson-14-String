#include<stdio.h>
#include<string.h>
#include<ctype.h>

int demsotu(char chuoi[]){
	int dem;
	int trangthai;
	
	for(int i=0; i< strlen(chuoi);i++){
		if(isspace(chuoi[i])){
			trangthai=0;
		}
		else{
			if(!trangthai){
				dem++;
				trangthai=1;
			}
		}
	}
	return dem;
	
}

int main(){
	char chuoi[100];
	
	printf("Nhap Mot Chuoi Vao: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	
	size_t len = strlen(chuoi);
	if(len > 0 && chuoi[len-1] == '\n'){
		chuoi[len-1]='\0';
	}
	
	int sotu = demsotu(chuoi);
	
	printf("So Tu Trong Chuoi %d",sotu);
	
	return 0;
}
