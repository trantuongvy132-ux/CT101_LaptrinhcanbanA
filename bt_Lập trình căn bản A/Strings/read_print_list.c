#include <stdio.h>
#include <string.h>
int main(){
	int i,n; scanf("%d",&n);
	getchar();
	char list[n][50];
	for(i=0;i<n;i++){
		fgets(list[i],sizeof(list[i]),stdin);
		list[i][strcspn(list[i],"\n")]='\0';
		
	}
	for(i=0;i<n;i++){
		//puts(list[i]);
		printf("%d. %s\n",i+1,list[i]);
	}
}
