#include <stdio.h>
void getFibo(int A[],int n){
    int i;
    for(i=0;i<n+1;i++){
    	if(i==0||i==1){
    		A[i]=1;
    	}else{
    		A[i]=A[i-1]+A[i-2];
		}
	}
}
int main(){
	int A[50];
	int i,n;
	n=10;
	getFibo(A,n);
	for(i=0;i<=n;i++)
	    printf("%d ",A[i]);
}
