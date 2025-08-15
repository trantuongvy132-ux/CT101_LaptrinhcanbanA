#include <stdio.h>
void PrintN(int n){
    if(n!=0){
    	printf("%d\n",n);
        PrintN(n-1);
    }
}
int main(){
	int n;
	scanf("%d",&n);
	PrintN(n);
	return 0;
}
