#include <stdio.h>
typedef struct{
    double r,i;
} Complex;
Complex readComplex(){
	Complex c;
	scanf("%lf %lf",&(c.r),&(c.i));
	return c;
}
void printComplex(Complex c){
    printf("%.3lf + i%.3lf\n",c.r,c.i);
}
void add(Complex c1,Complex c2,Complex *C){
    C->r=c1.r+c2.r;
    C->i=c1.i+c2.i;
}
int main(){
//	Complex c1 = {10,15};
//	Complex c2 = {2,3};
//	Complex c;
//	printComplex(c1);
//	printComplex(c2);
//	add(c1,c2,&c);
//	printComplex(c);

	
	Complex c1 = readComplex();
	Complex c2 = readComplex();
	Complex c;
	printComplex(c1);
	printComplex(c2);
	add(c1,c2,&c);
	printComplex(c);
}
