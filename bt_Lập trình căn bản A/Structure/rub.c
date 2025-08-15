#include <stdio.h>
struct PhanSo {
    int t, m;
};
void inPhanSo(struct PhanSo x) {
    printf("%d/%d\n", x.t, x.m);
}
int GCD(int a, int b) {
    if (a % b == 0) {
        return b;
    } else {
        return GCD(b, a % b);
    }
}
void chuanhoa(struct PhanSo *C) {
    int u = GCD(C->t, C->m);
    C->t /= u;
    C->m /= u;
}
void cong(struct PhanSo A, struct PhanSo B, struct PhanSo *C) {
    C->t = A.t + B.t;
    C->m = A.m + B.m;
    chuanhoa(C);
}
int main() {
    struct PhanSo a = {10, 15};
    struct PhanSo b = {2, 3};
    struct PhanSo c;
    inPhanSo(a);
    inPhanSo(b);
    cong(a, b, &c);
    inPhanSo(c);
    return 0;
}

