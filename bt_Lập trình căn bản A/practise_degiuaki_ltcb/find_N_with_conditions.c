#include <stdio.h>
int main(){
	int s,n=1; scanf("%d",&s);
	double sum=0.0;
	while(sum<=s){
		sum+=1.0/n;
		n++;
	}
	printf("min N la: %d",n-1);
}
