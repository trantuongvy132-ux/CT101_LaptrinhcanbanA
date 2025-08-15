#include <stdio.h>
int DIV(int a,int b){
	int times=0;
	while(a>=b){
		a=a-b;
		times++;
		//a=temp;
	}
	return times;
}
int main(){
	int a,b; scanf("%d %d",&a,&b);
	printf("%d",DIV(a,b));
}
