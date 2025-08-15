#include <stdio.h>
//void Insert(int x,int p,int A[],int *n){
//    int i; (*n)++;
//    for(i=(*n)-1;i>p;i--){
//    	A[i]=A[i-1];
//    }
//    A[p]=x;
//}
//void Insert(int x, int p, int A[], int *n) {
//    int i;
//    (*n)++;
//    for (i = *n - 1; i >= p; i--) {
//        A[i + 1] = A[i];
//    }
//    A[p] = x;
//}
//void Insert(int x, int p, int A[], int *n) {
//    int i;
//    for (i =*n-1;i>=p;i--){
//        A[i+1]=A[i];
//    }
//    A[p]=x;
//    (*n)++;
//}
void Insert(int x, int p, int A[], int *n) {
    int i;
    for (i=*n;i>p;i--){
        A[i]=A[i-1];
    }
    A[p]=x;
    (*n)++;
}
int main(){
	int a[] = {1, 5, 2, 0, 7 , 6};
	int n =sizeof(a)/sizeof(int);
	int x,i,p;
	x=100;
	p=0;
	Insert(x,p,a, &n);
	for(i=0;i<=n-1;i++) // *n vi gia tri cua n se duoc luu sau khi khai bao ham
	    printf("%d ",a[i]);

//	int a[] = {1, 5, 2, 0};
//	int n =sizeof(a)/sizeof(int);
//	int x,i,p;
//	x=100;
//	p=2;
//	Insert(x,p,a, &n);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);
	    
//	int a[] = {1, 5, 2, 0};
//	int n =sizeof(a)/sizeof(int);
//	int x,i,p;
//	x=100;
//	p=4;
//	Insert(x,p,a, &n);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",a[i]);
}
