#include <stdio.h>
struct PhanSo{
    int ts,ms;
};
struct PhanSo nhapPhanSo(){
    struct PhanSo a;
    scanf("%d %d",&a.ts,&a.ms);
    return a;
}
void inPhanSo(struct PhanSo a){
    printf("%d/%d",a.ts,a.ms);
}

int main(){
   	struct PhanSo a;
   	a = nhapPhanSo(); // G?i h�m nh?p 1 ph�n s?
   	inPhanSo(a); // Hi?n th? ph�n s?
    return 0;
}
