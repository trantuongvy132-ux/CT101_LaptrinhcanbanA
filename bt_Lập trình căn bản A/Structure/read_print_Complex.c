#include <stdio.h>
typedef struct {
    double r, i;
}Complex;
Complex readComplex(){
    Complex a;
    scanf("%lf %lf",&(a.r),&(a.i));
    return a;
}
void printComplex(Complex a){
    printf("%.3lf + i%.3lf",a.r,a.i);
}

int main(){
   	Complex a;
   	a = readComplex(); // G?i h�m nh?p 1 s? ph?c t? b�n ph�m
   	printComplex(a); // Hi?n th? s? ph?c a l�n m�n h�nh
       return 0;
}
