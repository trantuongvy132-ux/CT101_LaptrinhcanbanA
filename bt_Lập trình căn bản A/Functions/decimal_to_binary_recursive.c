#include <stdio.h>
void dec2bin(int n){
    if(n!=0){
        dec2bin(n/2);
        printf("%d",n%2);
    }
}
int main(){
	int n;
	scanf("%d",&n);
	dec2bin(n);
	return 0;
}
