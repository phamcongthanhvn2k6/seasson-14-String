#include <stdio.h>
#include <string.h>

void demkytu(char chuoi[], int *chucai, int *chuso, int *dacbiet) {
    *chucai = *chuso = *dacbiet = 0;
    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            (*chucai)++;
        } else if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            (*chuso)++;
        } else {
            (*dacbiet)++;
        }
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

    int chucai = 0, chuso = 0, dacbiet = 0;
    demkytu(chuoi, &chucai, &chuso, &dacbiet);
    
    printf("So ky tu la chu cai: %d\n", chucai);
    printf("So ky tu la chu so: %d\n", chuso);
    printf("So ky tu dac biet: %d\n", dacbiet);

    return 0;
}

