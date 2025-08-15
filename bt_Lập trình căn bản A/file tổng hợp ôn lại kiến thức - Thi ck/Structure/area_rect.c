#include <stdio.h>
#include <math.h>
struct Point{
    double X,Y;
};
struct Rect{
    struct Point B;
    struct Point D;
};
double area(struct Rect A){
    double d=fabs(A.B.X-A.D.X);
    double r=fabs(A.B.Y-A.D.Y);
    return d*r;
}
int main(){
//	struct Rect r = {{10,2},{2,8}};
//	printf("%.5lf",area(r));

	struct Rect r = {{10,2.5},{2,8.3}};
	printf("%.5lf",area(r));
}
