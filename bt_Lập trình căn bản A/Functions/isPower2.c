#include <stdio.h>
#include <math.h>
int isPower2(int n){
    int k;
    for(k=0;k<=n;k++){
        if(n==pow(2,k)){
            return 1;
        }
    }
    return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",isPower2(n));
	return 0;
}
