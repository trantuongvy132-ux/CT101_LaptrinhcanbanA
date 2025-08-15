#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char *HoTen;
    float LT, TH;
    char *DiemChu;
} SinhVien;

void nhapSV(SinhVien *sv) {
    char temp[100];
    sv->HoTen = (char *)malloc(100 * sizeof(char));
    fgets(sv->HoTen, 100, stdin);
    sv->HoTen[strcspn(sv->HoTen, "\n")] = 0; // Loai bo ky tu xuong dong

    scanf("%f %f", &sv->LT, &sv->TH);
    getchar(); // Lo?i b? ký t? xu?ng dòng còn l?i

    // Gi? d?nh phân lo?i di?m ch?
    sv->DiemChu = (char *)malloc(2 * sizeof(char));
    strcpy(sv->DiemChu, "A"); // Ví d?: gán m?c d?nh là A
}

void inSV(SinhVien sv) {
    printf("%s %.3f %.3f %s\n", sv.HoTen, sv.LT, sv.TH, sv.DiemChu);
}

void nhapDS(SinhVien **pL, int n) {
	int i;
    *pL = (SinhVien *)malloc(n * sizeof(SinhVien));
    for(i = 0; i < n; i++) {
        getchar(); // Lo?i b? ký t? xu?ng dòng còn l?i t? l?n nh?p tru?c
        nhapSV(&(*pL)[i]);
    }
}

void inDS(SinhVien *L, int n) {
	int i;
    for(i = 0; i < n; i++) {
        inSV(L[i]);
    }
}

int main() {
    int n;
    SinhVien *list;
    scanf("%d", &n);
    nhapDS(&list, n);
    inDS(list, n);
    // Gi?i phóng b? nh?
//    for(int i = 0; i < n; i++) {
//        free(list[i].HoTen);
//        free(list[i].DiemChu);
//    }
    free(list);
    return 0;
}

