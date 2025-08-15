#include <stdio.h>
#include <math.h>
struct PhanSo{
    int ts,ms;
};
void inPhanSo(struct PhanSo a){
    printf("%d/%d\n",a.ts,a.ms);
}
int GCD(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return abs(a);
}
void chuanhoa(struct PhanSo *pa){
	int u=GCD(pa->ts,pa->ms);  //ko dua GCD vao bien u ma ghi ra la sai nha, tai gia tri cua no changed roi
    pa->ts/=u;
    pa->ms/=u;
}

int main(){
	struct PhanSo a = {10,15};
	inPhanSo(a);
	chuanhoa(&a);
	inPhanSo(a);
}
