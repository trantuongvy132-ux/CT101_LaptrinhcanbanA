#include <stdio.h>
double power(float a,int n){
    if(n==0){
        return 1;
    }else{
        return (double)a*power(a,n-1);
    }
}
int main(){
	float a;
	int n;
	scanf("%f %d",&a,&n);
	printf("%.4f",power(a,n));
	return 0;
}
