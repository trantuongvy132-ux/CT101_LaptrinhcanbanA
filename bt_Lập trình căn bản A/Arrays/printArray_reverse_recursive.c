#include <stdio.h>
void readArray(int A[],int n){
    if(n<=0){
        return;
    }else{
    	readArray(A,n-1);
        scanf("%d",&A[n-1]);
    }
}
void printArray(int A[],int n){
    if(n>0){
        printf("%d\n",A[n-1]);
        printArray(A,n-1);
    }
}
int main(){
	int n; scanf("%d",&n);
	int i,A[n];
	readArray(A,n);
	printArray(A,n);
	return 0;
}
