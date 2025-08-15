#include <stdio.h>
#include <stdlib.h>
float nhap_so_thuc() {
    float so_thuc;
    char buffer[100];

    while (1) {
        printf("Nh?p m?t s? th?c: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%f", &so_thuc) == 1) {
            return so_thuc;
        }
        printf("Vui lòng nh?p m?t s? th?c h?p l?!\n");
    }
}

int main() {
    float so_thuc_1, so_thuc_2;
    so_thuc_1 = nhap_so_thuc();
    so_thuc_2 = nhap_so_thuc();

    float tong = so_thuc_1 + so_thuc_2;
    float hieu = so_thuc_1 - so_thuc_2;
    float tich = so_thuc_1 * so_thuc_2;
    float thuong;
    if (so_thuc_2 != 0) {
        thuong = so_thuc_1 / so_thuc_2;
    } else {
        printf("Không th? chia cho 0\n");
        exit(EXIT_FAILURE);
    }
    printf("T?ng: %.2f\n", tong);
    printf("Hi?u: %.2f\n", hieu);
    printf("Tích: %.2f\n", tich);
    printf("Thuong: %.2f\n", thuong);

    return 0;
}

