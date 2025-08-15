#include <stdio.h>
#include <math.h>
int main(){
	float epsilon; scanf("%f",&epsilon);
	float t=4.0; int n=0;
	while(4.0/(2*n+1)>epsilon){
		n++;
		t+=pow(-1,n)*(4.0/(2*n+1));
		
	}
	printf("%.8f",t);
	return 0;
}
