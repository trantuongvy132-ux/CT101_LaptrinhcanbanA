#include <stdio.h>
double power(a,n){
	if(n<=0){
		return 1.0;
	}else{
		return a*power(a,n-1);
	}
}
int main(){
	int a,n; scanf("%d %d",&a,&n);
	printf("%.lf",power(a,n));
	return 0;
}
