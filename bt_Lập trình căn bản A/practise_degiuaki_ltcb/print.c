#include <stdio.h>
void print(int x){
	int temp=x;
	while(x!=0){
		printf("#");
		x--;
	}
	printf(" %d\n",temp);
}
int main(){
	int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
	print(a);
	print(b);
	print(c);
	print(d);
}
