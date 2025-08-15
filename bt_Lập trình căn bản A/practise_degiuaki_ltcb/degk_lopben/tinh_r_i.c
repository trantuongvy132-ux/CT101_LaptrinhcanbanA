#include <stdio.h>
int main(){
	double r1,r2,r3; scanf("%lf %lf %lf",&r1,&r2,&r3);
	double r;
	r=(r1*r2*r3)/(r1*r2+r2*r3+r1*r3);
	printf("r tuong duong la: %.2lf",r);
}
