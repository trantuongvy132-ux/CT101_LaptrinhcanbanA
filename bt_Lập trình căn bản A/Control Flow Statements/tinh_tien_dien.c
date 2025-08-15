#include <stdio.h>
int main() {
    int sc, sm;
    scanf("%d %d", &sc, &sm);

    int tt=sm-sc;
    int tong_tien = 0;
    int muc[] = {50, 50, 100, 100, 100, 1000};
    int gia[] = {1549, 1600, 1858, 2340, 2615, 2701};
    int i;

    for (i = 0; i < 6; i++) {
        if (tt <= 0) {
            break;
        }
        int mucKwh=(tt>muc[i]) ? muc[i] : tt;
        int tien=mucKwh*gia[i];

        tong_tien+=tien;
        tt-=mucKwh;
    }

    printf("%d Kwh: %d VND",sm-sc,tong_tien);
    return 0;
}
