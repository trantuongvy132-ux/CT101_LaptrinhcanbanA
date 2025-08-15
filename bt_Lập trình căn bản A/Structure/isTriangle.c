#include <stdio.h>
#include <math.h>
struct Point{
   double X,Y;
};
int isTriangle(struct Point A,struct Point B,struct Point C){
    double d1,d2,d3;
    d1=sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
    d2=sqrt(pow(A.X-C.X,2)+pow(A.Y-C.Y,2));
    d3=sqrt(pow(B.X-C.X,2)+pow(B.Y-C.Y,2));
    if((d1+d2>d3)&&(d1+d3>d2)&&(d2+d3>d1)){
    	return 1;
    }else{
    	return 0;
	}
}
int main(){
	struct Point A={1,2};
	struct Point B={1,3};
	struct Point C={2,3};
		
	if (isTriangle(A,B,C))
		printf("YES");
	else printf("NO");
}
