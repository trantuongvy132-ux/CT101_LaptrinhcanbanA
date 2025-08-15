#include <stdio.h>
#include <stdlib.h>
int findGCD(int a, int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}return abs(a);
}
int main(){
	int a,b,LCM;
	scanf("%d %d",&a,&b);
	LCM=abs(a*b)/findGCD(a,b);
	printf("%d",LCM);
	return 0;
}
