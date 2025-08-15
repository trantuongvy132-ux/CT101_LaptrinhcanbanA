#include <stdio.h>
#include <stdlib.h>
void check(float A[],int n,char *sOutput){
	//FILE *f=fopen("sOutput.txt","w");		//ko nen dung ten co dinh nha be oi
	FILE *f=fopen(sOutput,"w");
	int i;
	for(i=0;i<n/2;i++){
		if(A[i]!=A[n-1-i]){
			fputs("NO",f);
			fclose(f);
			return;		//ko nen dung exit(0) cho nay nha
		}
	}
	fputs("YES",f);
	fclose(f);
}
void checkPalindrome(char *sInput,char *sOutput){
	//FILE *f=fopen("sInput.txt","r");		//ko nen dung ten co dinh nha be iu oi
	FILE *f=fopen(sInput,"r");
	int n;	//doc vao so luong phan tu n
	fscanf(f,"%d",&n);
	int i; float A[n];	//doc vao n phan tu vao mang A[]
	for(i=0;i<n;i++){
		fscanf(f,"%f",&A[i]);
	}
	fclose(f);
	check(A,n,sOutput);
}

int main(){
	//checkPalindrome()
	char *sInput="sInput.txt";
	char *sOutput="sOutput.txt";
	checkPalindrome(sInput,sOutput);
	//
	FILE *f;
	f=fopen("sOutput.txt","r");
	char data[10];
	if(!f){
		perror("Error operating file");
	}
	//
	if(fgets(data,sizeof(data),f)!=NULL){
		puts(data);
	}else{
		printf("There's no data at all");
	}
	fclose(f);
	return 0;
}
