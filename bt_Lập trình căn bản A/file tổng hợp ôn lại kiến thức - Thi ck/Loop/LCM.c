#include <stdio.h>
int GCD(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return abs(a);
}	
int main(){
	int a,b; scanf("%d %d",&a,&b);
	int LCM=abs(a*b)/GCD(a,b);
	printf("%d",LCM);
	return 0;
}
