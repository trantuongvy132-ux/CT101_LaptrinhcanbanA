#include <stdio.h>
double power(float a,int n){
    if(n==0){
        return 1;
    }else if(n%2==0){
        return power(a,n/2)*power(a,n/2);
    }else{
        return power(a,n/2)*power(a,n/2)*a;
    }
}
int main(){
	float a;
	int n;
	scanf("%f %d",&a,&n);
	printf("%.4f",power(a,n));
	return 0;
}
