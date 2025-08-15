#include <stdio.h>
#include <stdlib.h>
int GCD(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return abs(a);
}
void reduce(int a,int b){
    printf("%d/%d = %d/%d",a,b,a/GCD(a,b),b/GCD(a,b));
}
int main(){
	int a,b;
	scanf("%d/%d",&a,&b);
	//printf("%d",GCD(a,b));
	reduce(a,b);
	return 0;
}
