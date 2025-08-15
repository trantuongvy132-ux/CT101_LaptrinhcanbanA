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
void nhan(struct PhanSo A,struct PhanSo B,struct PhanSo *pC){
    pC->ts=(A.ts*B.ts);
    pC->ms=(A.ms*B.ms);
    int u=GCD(pC->ts,pC->ms);
    pC->ts/=u;
    pC->ms/=u;
}

int main(){
	struct PhanSo a = {10,15};
	struct PhanSo b = {2,3};
	struct PhanSo c;
	inPhanSo(a);
	inPhanSo(b);
	nhan(a,b,&c);
	inPhanSo(c);
}
