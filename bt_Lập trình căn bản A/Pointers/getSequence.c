#include <stdio.h>
#include <stdlib.h>
int* getSequence(int n,int d){
    int i; int *a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
    	a[i]=1+i*d;
    }
    return a;
}
int main(){
//	int *a;
//	int n=5, d=2;
//	int i;
//	a=getSequence(n,d);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);
//	free(a);

//	int *a;
//	int n=6, d=3;
//	int i;
//	a=getSequence(n,d);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);
//	free(a);

	int *a;
	int n=1, d=2;
	int i;
	a=getSequence(n,d);
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
	free(a);
}
