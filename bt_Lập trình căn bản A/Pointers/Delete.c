#include <stdio.h>
void Delete(int p,int A[],int *n){
    int i;
    for(i=p;i<(*n);i++){
    	A[i]=A[i+1];
    }
    (*n)--;
}
int main(){
//	int a[] = {1, 5, 20, 0};
//	int n =sizeof(a)/sizeof(int);
//	int o,p,i;
//	p=2;
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);
//	Delete(p,a, &n);
//	printf("\n");
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);

//	int a[] = {1, 5, 20, 0};
//	int n =sizeof(a)/sizeof(int);
//	int o,p,i;
//	p=0;
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);
//	Delete(p,a, &n);
//	printf("\n");
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);

	int a[] = {1, 5, 20, 0, 56, 9};
	int n =sizeof(a)/sizeof(int);
	int o,p,i;
	p=5;
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
	Delete(p,a, &n);
	printf("\n");
	for(i=0;i<=n-1;i++)
	    printf("%d ",a[i]);
}
