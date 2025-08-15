#include <stdio.h>
#include <math.h>
int isSquareNumber(int n){
    int r=sqrt(n);
    if(r*r==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
	int n; scanf("%d",&n);
	printf("%d",isSquareNumber(n));
	return 0;
}
