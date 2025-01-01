#include<stdio.h>

int demchucai(char chuoi[]){
	int dem=0;
	
	for(int i=0;i<chuoi[i];i++){
		if((chuoi[i] >= 'A' && chuoi[i] <= 'Z')||(chuoi[i] >='a' && chuoi[i]<='z')){
			dem++;
		}
	}
	
	return dem;
}

int main(){
	
	char chuoi[100];
	
	printf("Nhap Vao Trong Mot Chuoi Ky Tu: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	
	size_t len=0;
	while(chuoi[len] != '\0' && chuoi[len] !='n'){
		len++;
		
	}
	if(chuoi[len]=='\n'){
	
	chuoi[len]='\0';
}
	int sochucai = demchucai(chuoi);
	
	printf("So Ky Tu La Chu Cai Trong Chuoi La: %d", sochucai);
	
	return 0;
	}

