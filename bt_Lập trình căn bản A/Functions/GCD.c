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
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",GCD(a,b));
	return 0;
}
