#include <stdio.h>
double power(float a,int n){
    if(n==0){
        return 1.0;
    }else{
        return a*power(a,n-1);
    }
}
int main(){
	//float a; int n; scanf("%f %d",&a,&n);
	printf("%.4f\n", power(-2.0, 5));
	return 0;
}
