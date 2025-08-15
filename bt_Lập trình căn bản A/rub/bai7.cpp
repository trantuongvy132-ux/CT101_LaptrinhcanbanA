#include <stdio.h>
#include <conio.h>
int main(){
	int f;
	float c;
	
	printf("Moi nhap gia tri nhiet do F: ");
	scanf("%d",&f);
	
	c=(5.0/9.0)*(f-32);
	printf("%d do F = %.2f do C",f,c);
	
	getch();
	return 0;
}
