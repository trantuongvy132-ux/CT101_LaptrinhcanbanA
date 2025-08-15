#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char *HoTen;
    float LT, TH;
    char *DiemChu;
} SinhVien;

char* diemchu(float dt) {
    if(dt >= 9.0) {
        return "A";
    } else if(dt >= 8.0) {
        return "B+";
    } else if(dt >= 7.0) {
        return "B";
    } else if(dt >= 6.0) {
        return "C+";
    } else if(dt >= 5.0) {
        return "C";
    } else if(dt >= 4.5) {
        return "D+";
    } else if(dt >= 4.0) {
        return "D";
    } else {
        return "F";
    }
}

void nhapSV(SinhVien *sv) {
    char temp[100];
    sv->HoTen = (char *)malloc(100 * sizeof(char));
    fgets(sv->HoTen, 100, stdin);
    sv->HoTen[strcspn(sv->HoTen, "\n")] = 0;

    scanf("%f %f", &sv->LT, &sv->TH);
    getchar();

    sv->DiemChu = strdup(diemchu(sv->LT + sv->TH));
}

void inSV(SinhVien sv) {
    printf("%s %.3f %.3f %s\n", sv.HoTen, sv.LT, sv.TH, sv.DiemChu);
}

void nhapDS(SinhVien **pL, int n) {
	int i;
    *pL = (SinhVien *)malloc(n * sizeof(SinhVien));
    for(i = 0; i < n; i++) {
        getchar();
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
