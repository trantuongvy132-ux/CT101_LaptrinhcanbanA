#include <stdio.h>
#include <conio.h>
int main(){
	int c;
	float f;
	
	printf("Moi nhap gia tri nhiet do C: ");
	scanf("%d",&c);
	
	f=(9.0/5.0)*c+32;
	printf("%d do C = %.1f do F",c,f);
	
	getch();
	return 0;
}
