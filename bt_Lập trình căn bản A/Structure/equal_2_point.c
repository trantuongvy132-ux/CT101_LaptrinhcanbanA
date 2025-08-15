#include <stdio.h>
#include <math.h>
struct Point{
   double X,Y;
};
int equal(struct Point A,struct Point B,double Epsilon){
    double d;
    d=sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
    if(d<Epsilon){
        return 1;
    }else{
        return 0;
    }
}
int main(){
//	struct Point A={1,2};
//	struct Point B={1,3};
//	
//		
//	if (equal(A,B, 0.000001))
//		printf("A = B");
//	else printf("A != B");
//
	struct Point A={1,2};
	struct Point B={1,2.00000001};
	
		
	if (equal(A,B, 0.000001))
		printf("A = B");
	else printf("A != B");	
}
