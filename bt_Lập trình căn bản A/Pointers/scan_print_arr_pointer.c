#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a; // DE CHO
	
	// so luong cac so nguyen
	int n; scanf("%d",&n);
	// cap phat 1 vung nhó n so nguyen
	a=(int*)malloc(n*sizeof(int));
	
	// nhap n so nguyen
//	int i, A[n];
//	for(i=0;i<n;i++){
//	    scanf("%d",&A[i]);
//	}
	int i;
	for(i=0;i<n;i++){
		scanf("%d",(a+i));
	}
	
	// hien thi n so nguyen vua nhap
//	for(i=0;i<n;i++){
//	    printf("%d ",A[i]);
//	}
	for(i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	
	free(a); // DE CHO
}
