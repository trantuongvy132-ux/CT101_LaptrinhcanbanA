#include <stdio.h>
#include <ctype.h>
char lowCase(char c){
    return tolower(c);
}
int main(){
	char c;
	scanf("%c",&c);
	printf("%c",lowCase(c));
	return 0;
}
