#include <stdio.h>
#include <stdlib.h>
int NumDigits(int n){
	n=abs(n);
    if(n<10){
        return 1;
    }else{
        return 1+NumDigits(n/10);
    }
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",NumDigits(n));
	return 0;
}
