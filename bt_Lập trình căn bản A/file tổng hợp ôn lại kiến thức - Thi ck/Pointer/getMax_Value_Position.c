#include <stdio.h>
void getMax(float A[],int n,float *pMaxValue,int *pMaxPos){
    int i;
    *pMaxValue=A[0]; *pMaxPos=0;
    for(i=0;i<n;i++){
        if(A[i]>(*pMaxValue)){
            *pMaxValue=A[i];
            *pMaxPos=i;
        }
    }
}
int main(){
	float a[] = {1.2};
	int n =sizeof(a)/sizeof(float);
	float Max;
	int vtMax;
	getMax(a,n,&Max, &vtMax);
	printf("%.4f at %d",Max,vtMax);
}
