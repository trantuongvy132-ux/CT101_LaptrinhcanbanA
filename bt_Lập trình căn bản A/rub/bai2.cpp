#include <stdio.h>
#include <conio.h>

int main(){
	int d,r,x;
	
	printf("Moi nhap chieu dai & chieu rong cua hinh chu nhat: ");
	scanf("%d %d",&d,&r);
	
	x=(d+r)*2;
	printf("Chu vi hinh chu nhat la: %d",x);
	
	getch();
	return 0;
}
