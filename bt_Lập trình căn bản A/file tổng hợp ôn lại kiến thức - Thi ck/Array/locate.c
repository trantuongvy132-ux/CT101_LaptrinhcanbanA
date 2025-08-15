#include <stdio.h>
int locate(int x,int A[],int n){
	int i;
	for(i=0;i<n;i++){
		if(A[i]==x){
			return i;
		}
	}
	return n;
}
int main(){
//	int A[]={1,20,30,4,3,4};
//	int i,p;
//	int n = sizeof(A)/sizeof(int);
//	for(i=0;i<=n-1;i++)
//	    printf("%d ",A[i]);
//	
//	p=locate(4,A,n);
//	if (p<n)
//	    printf("\nFound 4 at %d",p);
//	else 
//	    printf("\nNot found");

	int A[]={1};
	int n = sizeof(A)/sizeof(int);
	printf("%d",locate(1,A,n));
}
