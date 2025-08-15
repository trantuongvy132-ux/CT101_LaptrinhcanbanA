#include <stdio.h>
int countX(int x,int A[],int n){
    int i,s=0;
    for(i=0;i<n;i++){
        if(A[i]==x){
            s++;
        }
    }
    return s;
}
int main(){
	int A[]={1,2,3,4,3};
	int i, count;
	int n = sizeof(A)/sizeof(int);
	for(i=0;i<=n-1;i++)
	    printf("%d ",A[i]);
	count=countX(3,A,n);
	printf("\n%d",count);

	return 0;
}
