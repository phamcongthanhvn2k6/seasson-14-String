#include <stdio.h>
#include <string.h>

void viethoa(char chuoi[]) {
    int dodai = strlen(chuoi);
    
    if (dodai > 0 && chuoi[0] != ' ') {
        if (chuoi[0] >= 'a' && chuoi[0] <= 'z') {
            chuoi[0] -=32;
        }
    }
    
    for (int i = 1; i < dodai; i++) {
        if (chuoi[i - 1] == ' ' && chuoi[i] != ' ') {
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] -=32;
            }
        }
    }
}

int main() {
    char chuoi[100];
    
    printf("Nhap Chuoi Ky Tu Vao: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    size_t len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }
    
    viethoa(chuoi);
    
    printf("Chuoi Sau Khi Viet Hoa La: %s\n", chuoi);
    
    return 0;
}
