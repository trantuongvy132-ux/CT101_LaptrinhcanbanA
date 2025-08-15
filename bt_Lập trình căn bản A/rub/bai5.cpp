#include <stdio.h>
#include <conio.h>
int main(){
	const float pi=3.14;
	float d,cv,dt;
	
	printf("Moi nhap duong kinh cua hinh tron: ");
	scanf("%f",&d);
	
	cv=d*pi;
	dt=pi*(d/2)*(d/2);
	
	printf("Chu vi: %.2f\nDien tich: %.2f",cv,dt);
	
	getch();
	return 0;
}
