#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	float a,b,c,cv,dt,p;
	
	printf("Moi nhap do dai 3 canh cua tam giac: ");
	scanf("%f %f %f",&a,&b,&c);
	
	cv=a+b+c;
	p=cv/2;
	dt=sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Chu vi: %.2f\n\
Dien tich: %.2f",cv,dt);
	
	getch();
	return 0;
}
