#include <stdio.h>
#include <conio.h>

int main(){
	float r;
	int r1,r2,r3;
	
    printf("Moi nhap dien tro R1, R2, R3(1<=R<=100): ");
	scanf("%d %d %d",&r1,&r2,&r3);
	
	r=r1+(r2*r3)/(r2+r3);
	printf("Tong tro cua mach dien la: %.2f",r);	
	
	getch();
	return 0;
}
