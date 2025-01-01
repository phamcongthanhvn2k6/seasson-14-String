#include <stdio.h>
#include <string.h>
#include <ctype.h>

int dem_so_tu(const char *chuoi) {
    int dem = 0;
    int trong_tu = 0;  // Bi?n c? d? ki?m tra xem dang trong m?t t? hay kh�ng

    while (*chuoi) {
        if (isspace(*chuoi)) {
            trong_tu = 0;
        } else {
            if (!trong_tu) {
                dem++;
                trong_tu = 1;
            }
        }
        chuoi++;
    }

    return dem;
}

int main() {
    char chuoi[100];  // Khai b�o m?t m?ng k� t? c� k�ch thu?c 100

    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);  // �?c chu?i nh?p v�o t? b�n ph�m

    // Lo?i b? k� t? xu?ng d�ng '\n' ? cu?i chu?i (n?u c�)
    size_t len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }

    int so_tu = dem_so_tu(chuoi);

    printf("So tu trong chuoi la: %d\n", so_tu);

    return 0;
}

