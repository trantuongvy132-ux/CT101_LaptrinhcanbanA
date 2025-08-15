#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c; scanf("%lf %lf %lf",&a,&b,&c);
	double delta=b*b-4*a*c;
	if(delta<0){
		printf("Phuong trinh vo nghiem");
	}else if(delta==0){
		printf("Pt co 1 nghiem kep: %.1lf",-b/(2*a));
	}else{
		printf("Pt co 2 nghiem phan biet: %.1lf va %.1lf",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
	}
	return 0;
}
