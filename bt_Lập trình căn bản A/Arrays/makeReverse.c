#include <stdio.h>
void makeReverse(int A[],int n){
    int i,T[n-1];
    for(i=0;i<n;i++){
        T[i]=A[n-1-i];
    }
    for(i=0;i<n;i++){
    	A[i]=T[i];
    }
}
int main(){
//	int A[]={1,2,3,4};
//	int i;
//	int n = sizeof(A)/sizeof(int);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",A[i]);
//	printf("\n");
//	makeReverse(A,n);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",A[i]);
    int A[]={1,2,3,4,5};
	int i;
	int n = sizeof(A)/sizeof(int);
	for(i=0;i<=n-1;i++)
	    printf("%d ",A[i]);
	printf("\n");
	makeReverse(A,n);
	for(i=0;i<=n-1;i++)
	    printf("%d ",A[i]);
    
	return 0;
}
