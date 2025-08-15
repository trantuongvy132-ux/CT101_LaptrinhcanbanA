#include <stdio.h>

struct Point{
    double X,Y;
};
struct Rect{
    struct Point A;
    struct Point B;
};
int isIn(struct Point M,struct Rect r){
    double dk1=(M.X-r.A.X)/(r.B.X-r.A.X);
    double dk2=(M.Y-r.A.Y)/(r.B.Y-r.A.Y);
    if(0<=dk1 && dk1<=1 && 0<=dk2 && dk2<=1){
        return 1;
    }else{
        return 0;
    }
}
int main(){
//	struct Rect r = {{10,2},{2,8}};
//	
//	struct Point M={10.01,6};
//		
//	if (isIn(M,r))
//	    printf("YES");
//	else printf("NO");

	struct Rect r = {{10,2},{2,8}};
	struct Point M={8,6};
		
	if (isIn(M,r))
		printf("YES");
	else printf("NO");
}
