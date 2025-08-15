#include <stdio.h>
#include <stdlib.h>
void Insert(int x,int p,int A[],int *pn){
    int i; (*pn)++;
    A=(int*)malloc((*pn)*sizeof(int));
    for(i=(*pn)-1;i>=p;i--){
        A[i+1]=A[i];
    }
    A[p]=x;
}
int main(){
	int a[] = {1, 5, 2, 0, 7};
	int n =sizeof(a)/sizeof(int);
	int x,i,p;
	x=100;
	p=0;
	Insert(x,p,a, &n);
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
}
