#include <stdio.h>
#include <math.h>
int main(){
    int a,n;
    double e;
    scanf("%d %d %lf",&a,&n,&e);
    double x0=a/n;
    double xk=fabs(((n-1)*pow(x0,n)+a)/(n*pow(x0,n-1)));
    
    while(fabs(a-pow(xk,n))>=e){
        x0=xk;
        xk=fabs(((n-1)*pow(x0,n)+a)/(n*pow(x0,n-1)));
    }
    printf("%.8lf",xk);
    return 0;
}
