#include <stdio.h>
void xoay_mang(int A[],int n,int k){
	int i;
	for(i=0;i<k;i++){
		int temp=A[k+i];
		A[k+i]=A[i];
		A[i]=temp;
	}
}
int main(){
	// nhap mang A
	int n; scanf("%d",&n);
	int i,A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	// nhap so nguyen k de xoay mang tai vi tri thu k
	int k; scanf("%d",&k);
	// xoay mang
	xoay_mang(A,n,k);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
