#include <stdio.h>
void factorize(int n){
	int i=2;
	printf("%d = ",n);
	while(n!=1){
		if(n==i){
			printf("%d",i);
			n/=i;
		}else if(n%i==0){
			printf("%d x ",i);
			n/=i;
		}else{
			i++;
		}
	}
}
int main(){
	factorize(100);
}
