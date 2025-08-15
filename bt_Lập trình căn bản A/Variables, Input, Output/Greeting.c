#include <stdio.h>

int main(){
	char name[50];
	
	printf("Ten ban la gi?\n");
	//scanf("%[^\n]",&name);
	fgets(name,sizeof(name),stdin);
	printf("Xin chao, %s",name);
	
	return 0;
}
