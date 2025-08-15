#include <stdio.h>
struct Point{
    double x;
    double y;
};
int main(){
	struct Point a;
	scanf("%lf%lf",&a.x,&a.y); // Nhap tu ban phim cho tung truong
	printf("(%.3lf, %.3lf)",a.x,a.y); //Hien thi
} 
