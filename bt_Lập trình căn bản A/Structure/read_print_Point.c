#include <stdio.h>
struct Point{
    double x;
    double y;
};
struct Point readPoint(){
	struct Point a;
    scanf("%lf %lf",&(a.x),&(a.y));
    return a;
}
void printPoint(struct Point a){
    printf("(%.3lf, %.3lf)",a.x,a.y);
}

int main(){
   	struct Point a;
   	a = readPoint(); // G?i hàm nh?p 1 di?m t? bàn phím
   	//readPoint(&a);
   	printPoint(a); // Hi?n th? di?m a lên màn hình
       return 0;
}
