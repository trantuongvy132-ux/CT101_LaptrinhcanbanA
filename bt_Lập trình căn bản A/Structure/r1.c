#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *HoTen;
    float LT, TH;
    char *DiemChu;
} SinhVien;

// Hàm nh?p thông tin sinh viên
SinhVien nhapSV() {
    SinhVien sv;
    sv.HoTen = (char *)malloc(50 * sizeof(char)); // Gi? s? tên không quá 50 ký t?
    printf("Nhap ho ten: ");
    scanf("%49s", sv.HoTen); // Ð?c tên sinh viên
    printf("Nhap diem ly thuyet: ");
    scanf("%f", &sv.LT);
    printf("Nhap diem thuc hanh: ");
    scanf("%f", &sv.TH);
    sv.DiemChu = (char *)malloc(3 * sizeof(char)); // Gi? s? di?m ch? không quá 2 ký t?
    printf("Nhap diem chu: ");
    scanf("%2s", sv.DiemChu);
    return sv;
}

// Hàm hi?n th? thông tin sinh viên
void inSV(SinhVien sv) {
    printf("Ho ten: %s\n", sv.HoTen);
    printf("Diem ly thuyet: %.2f\n", sv.LT);
    printf("Diem thuc hanh: %.2f\n", sv.TH);
    printf("Diem chu: %s\n", sv.DiemChu);
}

// Hàm nh?p danh sách sinh viên
void nhapDS(SinhVien **pL, int n) {
	int i;
    *pL = (SinhVien *)malloc(n * sizeof(SinhVien));
    for (i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d:\n", i + 1);
        (*pL)[i] = nhapSV();
    }
}

// Hàm hi?n th? danh sách sinh viên
void inDS(SinhVien *L, int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("Thong tin sinh vien thu %d:\n", i + 1);
        inSV(L[i]);
    }
}

int main() {
    SinhVien *danhSach;
    int soLuongSV;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &soLuongSV);
    nhapDS(&danhSach, soLuongSV);
    inDS(danhSach, soLuongSV);
    // Gi?i phóng b? nh?
    int i;
    for (i = 0; i < soLuongSV; i++) {
        free(danhSach[i].HoTen);
        free(danhSach[i].DiemChu);
    }
    free(danhSach);
    return 0;
}

