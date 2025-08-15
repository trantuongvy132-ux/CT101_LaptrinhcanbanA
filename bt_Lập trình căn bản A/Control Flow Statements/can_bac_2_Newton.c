#include <stdio.h>
#include <math.h>
int main(){
	int a;
	double e;
	scanf("%d %lf",&a,&e);
	double x0=(double)(a+1.0)/2.0;
	double xn=(double)(x0+a/x0)/2.0;
	
	while(fabs((xn-x0)/x0)>=e){
			x0=xn;
			xn=(x0+a/x0)/2.0;
	}
	printf("%.8lf",xn);
	return 0;
}
