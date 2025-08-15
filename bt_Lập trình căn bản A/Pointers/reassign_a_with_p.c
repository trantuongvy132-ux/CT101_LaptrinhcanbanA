#include <stdio.h>
int main(){
	int a = 10;
	int *p=&a; //khai bao *p tai dia chi cua a
	*p=5; //gan lai gia tri cua a bang *p
	
	printf("%d",a);
}
