#include <stdio.h>
double S(int n){
    if(n==1){
        return 1.0;
    }else{
        return 1.0/n+S(n-1);
    }
}
int main(){
	int n; scanf("%d",&n);
	printf("%.12lf",S(n));
	//printf("%.12lf",S(50));
	return 0;
}
