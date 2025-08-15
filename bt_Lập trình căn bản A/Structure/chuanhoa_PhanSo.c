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
void chuanhoa(struct PhanSo *pa){
    int u=GCD(pa->x,pa->y);
    pa->x/=u;
    pa->y/=u;
}
int main(){
	struct PhanSo a = {10,15};
	inPhanSo(a);
	chuanhoa(&a);
	inPhanSo(a);
}
