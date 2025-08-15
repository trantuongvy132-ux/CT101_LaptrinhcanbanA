#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mystrcpy(char *s1, char *s2) {
    strcpy(s2, s1);
    s2[strlen(s1)] = '\0';
}
int main(){
	char c[100];
	mystrcpy("Hello World", c);
	printf("%s", c);
}
