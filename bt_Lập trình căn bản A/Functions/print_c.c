#include <stdio.h>
void print_c(char c,int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%c",c);
    }
}
int main(){
	char c;
	int n;
	scanf("%c %d",&c,&n);
	print_c(c,n);
	return 0;
}
