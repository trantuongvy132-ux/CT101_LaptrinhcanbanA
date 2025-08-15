#include <stdio.h>
#include <math.h>
double power(double n){
    if(n==0.0d||n==1.0d){
        return 1.0d;
    }else{
        return n*power(n-1.0d);
    }
}
double cosin(double x,double epsilon){
    double n=0.0d;
    double s=0.0d;
    while((pow(x,2.0d*n)/power(2.0d*n))>epsilon){
        s+=pow(-1.0d,n)*(pow(x,2.0d*n)/power(2.0d*n));
        n = n + 1.0d;
//        printf("%.13llf\n",pow(-1.0d,n)*(pow(x,2.0d*n)/power(2.0d*n)));
    }
    return s;
}
int main(){
	//double x,epsilon; scanf("%lf %lf",&x,&epsilon);
	//printf("%lf",cosin(x,epsilon));
	
	const double pi=3.141592653d;
//    printf("%.10lf\n",cosin(pi/3,0.0000000001));
    printf("%.13lf\n",cosin(pi/2,0.0000000001));
//	printf("%.10lf\n",cosin(0,0.0000000001));
	return 0;
}
