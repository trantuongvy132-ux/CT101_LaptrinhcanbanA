#include <stdio.h>
#include <math.h>
struct Point{
   double X,Y;
};
double do_dai(struct Point A,struct Point B){
    return sqrt(pow(A.X-B.X,2)+pow(A.Y-B.Y,2));
}
int isTriangle(struct Point A,struct Point B,struct Point C){
    double a=do_dai(B,C);
    double b=do_dai(A,C);
    double c=do_dai(A,B);
    if(a+b>c && a+c>b && b+c>a){
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
