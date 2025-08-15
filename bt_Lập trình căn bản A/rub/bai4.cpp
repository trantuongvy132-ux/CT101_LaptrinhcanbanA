#include <stdio.h>
#include <conio.h>
int main(){
	char name;
	float lt,th1,th2,th3,th4;
	
	printf("Moi nhap ten & diem: \n");
	scanf("%c",&name);
	scanf("%f %f %f %f %f",&lt,&th1,&th2,&th3,&th4);
	
	printf("%c\n\
Ly thuyet: %.2f\n\
Thuc hanh 1: %.2f\n\
Thuc hanh 2: %.2f\n\
Thuc hanh 3: %.2f\n\
Thuc hanh 4: %.2f\n\
Trung binh: %.2f",
name,lt,th1,th2,th3,th4,(lt+th1+th2+th3+th4)/5);

	getch();
	return 0;
}
