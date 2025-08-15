#include <stdio.h>
#include <math.h>
struct Point{
	double X,Y;
};
struct Rect {
    struct Point LL;
    struct Point UR;
};

double area(struct Rect a){
    double d,r;
    d=fabs(a.LL.X-a.UR.X);
    r=fabs(a.LL.Y-a.UR.Y);
    return d*r;
}

int main(){
	struct Rect a={{5,7},{1,10}};
}


//struct Rect others(){
//	struct Rect a;
//	a.LL.x+=abs(a.LL.x-a.UR.x);
//	a.LL.y+=abs(a.LL.y-a.UR.y);
//	return a;
//}
