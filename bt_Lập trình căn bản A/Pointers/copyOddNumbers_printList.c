#include <stdio.h>
void copyOddNumbers(int A[],int n,int B[],int *M){
    int i; *M=0;
    for(i=0;i<n;i++){
        if(A[i]%2!=0){
            B[*M]=A[i];
            (*M)++;
        }
    }
}
void printList(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }printf("\n");
}
int main(){
//	int a[]={1,5,6,8,71,0,12,13,11,18};
//	int b[1000];
//	int m,n;
//	
//	n = sizeof(a)/sizeof(int);
//	printList(a,n);
//	copyOddNumbers(a,n,b,&m);
//	printList(b,m);

	int a[]={1,3,5,7};
	int b[1000];
	int m,n;
	
	n = sizeof(a)/sizeof(int);
	printList(a,n);
	copyOddNumbers(a,n,b,&m);
	printList(b,m);
}
