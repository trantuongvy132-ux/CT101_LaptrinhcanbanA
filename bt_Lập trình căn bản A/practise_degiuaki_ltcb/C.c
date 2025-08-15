#include <stdio.h>
int C(int n,int k){
	if(n<k){
		return 0;
	}else if(k==1){
		return n;
	}else if(k==n){
		return 1;
	}else{
		return C(n-1,k-1)+C(n-1,k);
	}
}
int main(){
	int n,k; scanf("%d %d",&n,&k);
	printf("%lld",C(n,k));
	
	return 0;
}
