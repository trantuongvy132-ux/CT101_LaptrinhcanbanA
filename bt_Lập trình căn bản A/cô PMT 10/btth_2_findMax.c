#include <stdio.h>
int findMax(int A[],int n){
	int i, max=A[0];
	for(i=0;i<n;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	return max;
}
int main(){
	int n; scanf("%d",&n);
	int i,A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("%d",findMax(A,n));
	return 0;
}
