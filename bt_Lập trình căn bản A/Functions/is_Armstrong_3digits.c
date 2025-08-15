#include <stdio.h>
#include <math.h>
int is_Armstrong(int n){
    int a,b,c;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    if(pow(a,3)+pow(b,3)+pow(c,3)==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",is_Armstrong(n));
	return 0;
}
