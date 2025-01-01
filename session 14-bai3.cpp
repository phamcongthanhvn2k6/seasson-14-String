#include <stdio.h>
#include<string.h>

	int main() {
		char chuoi[100];
		
		printf("Nhap vao mot chuoi: ");
		fgets(chuoi, sizeof(chuoi), stdin);
		
		int dodai = strlen(chuoi);
		printf("Chuoi ban dau la: %s\n",chuoi);
		
		printf("Chuoi dao nguoc lai la: ");
			for( int i=dodai -1;i>=0;i--){
				printf("%c",chuoi[i]);
			}
		
		return 0;
	}
