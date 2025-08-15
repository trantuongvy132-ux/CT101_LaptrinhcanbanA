#include <stdio.h>
int isPerfect(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	if(n==s){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",isPerfect(n));
	return 0;
}
