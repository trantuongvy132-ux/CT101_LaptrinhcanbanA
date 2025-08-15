#include <stdio.h>
void readArray(int A[],int n){
    if(n<=0){
        return;
    }else{
    	readArray(A,n-1);
        scanf("%d",&A[n-1]);
    }
}
int main(){
	int n; scanf("%d",&n);
	int i,A[n];
	readArray(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
