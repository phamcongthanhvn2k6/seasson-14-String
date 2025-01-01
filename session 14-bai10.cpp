#include <stdio.h>
#include <string.h>

void dem_ky_tu(char chuoi[]) {
    int dodai = strlen(chuoi);
    char ky_tu[100]; 
    int so_lan[100]; 
    int dem = 0;

    for (int i = 0; i < dodai; i++) {
        int found = 0;
        for (int j = 0; j < dem; j++) {
            if (chuoi[i] == ky_tu[j]) {
                so_lan[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            ky_tu[dem] = chuoi[i];
            so_lan[dem] = 1;
            dem++;
        }
    }

    for (int i = 0; i < dem; i++) {
        printf("%c: %d\n", ky_tu[i], so_lan[i]);
    }
}

int main() {
    char chuoi[100];
    
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    size_t len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }

    dem_ky_tu(chuoi);

    return 0;
}

