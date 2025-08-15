#include <stdio.h>
int main(){
	int n; scanf("%d",&n);
	int i,A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int max=A[0],vt=1;
	for(i=0;i<n;i++){
		if(A[i]>max){
			max=A[i];
			vt=i;
		}
	}
	printf("max=%d o vi tri thu %d",max,vt);
}
	
