#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c; scanf("%lf %lf %lf",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		double cv,dt,p;
		cv=a+b+c;
		p=cv/2;
		dt=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("cv=%.2lf\n"
			   "dt=%.2lf",cv,dt);
	}else{
		printf("Khong tao thanh tam giac");
	}
	return 0;
}
