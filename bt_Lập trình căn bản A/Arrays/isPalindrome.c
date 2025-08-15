#include <stdio.h>
int isPalindrome(int A[],int n){
    int i,x=n/2;
    for(i=0;i<x;i++){
        if(A[i]!=A[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
//	int A[]={-1,1,0, 1,-1};
//	int n = sizeof(A)/sizeof(int);
//	if (isPalindrome(A,n))
//	    printf("YES");
//	else
//	    printf("NO");
//	int A[]={-1,1, 1,-1};
//	int n = sizeof(A)/sizeof(int);
//	if (isPalindrome(A,n))
//	    printf("YES");
//	else
//	    printf("NO");
	int A[]={-1,-3, -1, 5};
	int n = sizeof(A)/sizeof(int);
	printf("%d",isPalindrome(A,n));
	return 0;
}
