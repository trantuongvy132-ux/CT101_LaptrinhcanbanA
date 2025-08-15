#include <stdio.h>
#include <math.h>
int kth_digit(int n,int k){
    return (n/(int)pow(10,k))%10;
}
int main(){
	//int n,k; scanf("%d %d",&n,&k);
	//printf("%d", kth_digit(1346, 2));
	printf("%d", kth_digit(10000123, 2));
	return 0;
}
