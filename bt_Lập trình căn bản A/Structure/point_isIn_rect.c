#include <stdio.h>
#include <math.h>
struct Point{
	double X,Y;
};
struct Rect{
    struct Point B;
    struct Point D;
};
int isIn(struct Point M,struct Rect r){
	double dk1=(M.X-r.B.X)/(r.D.X-r.B.X);
	double dk2=(M.Y-r.B.Y)/(r.D.Y-r.B.Y);
    if(0<=dk1 && dk1<=1 && 0<=dk2 && dk2<=1){
    	return 1;
    }else{
    	return 0;
	}
}
int main(){
	struct Rect r = {{10,2},{2,8}};
	struct Point M={10.01,6};	
	if (isIn(M,r))
	    printf("YES");
	else printf("NO");

//	struct Rect r = {{10,2},{2,8}};
//	struct Point M={8,6};
//	if (isIn(M,r))
//		printf("YES");
//	else printf("NO");
}


// rect da cho co the xoay theo nhieu huong :0
//int isIn(struct Point M,struct Rect r){
//    if(r.D.X<=M.X && M.X<=r.B.X && r.D.Y<=M.Y && M.Y<=r.B.Y){
//    	return 1;
//    }else{
//    	return 0;
//	}
//}
