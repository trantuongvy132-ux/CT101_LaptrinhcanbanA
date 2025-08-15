#include <stdio.h>
//Khai bao cau truc 
struct Point{
	float x,y;
};
//-END-SECTION-
int main() { 
    struct Point a;
    //doc du lieu cho bien a    
    scanf("%f %f",&a.x,&a.y);
    printf("(%.3f, %.3f)", a.x, a.y);
    return 0;
}
