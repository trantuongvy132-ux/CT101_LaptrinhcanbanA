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
int LCM(int a,int b){
	int gcd=GCD(a,b);
	a=abs(a);
	b=abs(b);
	if(GCD(a,b)==1){
		return a*b;
	}else if(a<b){
		return (a/gcd)*b;
	}else{
		return (b/gcd)*a;
		}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",LCM(a,b));
	return 0;
}
