#include <stdio.h>
struct PhanSo{
    int x,y;
};
void inPhanSo(struct PhanSo a){
    printf("%d/%d\n",a.x,a.y);
}
int GCD(int a,int b){
    if(a%b==0){
        return b;
    }else{
        return GCD(b,a%b);
    }
}
void chuanhoa(struct PhanSo *a){
    int u=GCD(a->x,a->y);
    a->x/=u;
    a->y/=u;
}
void nhan(struct PhanSo A,struct PhanSo B,struct PhanSo *C){
    C->x=A.x*B.x;
    C->y=A.y*B.y;
    chuanhoa(C);
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
