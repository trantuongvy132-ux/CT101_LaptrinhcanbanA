#include <stdio.h>
#include <stdlib.h>  // define func in file :}
// 14 func of file in C - how to use ;}

// fopen & fclose   

// fread - doc van ban (ra console :})		// file.bin
//int main(){
//	FILE *f;
//	f=fopen("data.txt","r");
//	if(f==NULL){
//		return EXIT_FAILURE;
//		exit(1);
//	}
//	char str[100];
//	fread(str,sizeof(char),sizeof(str),f);
//	printf("%s",str);
//	fclose(f);
//}

// fwrite - viet(hien thi) van ban vao file		// file.bin
//int main(){
//	FILE *f;
//	f=fopen("data.bin","wb");
//	char name[]="Tran Thi Thuy Hien";
//	size_t num=fwrite(name,sizeof(char),sizeof(name),f);
//	if(num!=sizeof(name)){
//		printf("error ;-;");
//		//return EXIT_FAILURE;
//		exit(1);
//	}
//	fclose(f);
//}

// fseek - dat con tro den vi tri cua offset (SEEK_SET: dau, SEEK_CUR: hien tai, SEEK_END: cuoi)
//int main(){
//	FILE *f;
//	//f=fopen("data.bin","wb");
//	//fputs("Tran Tuong Vy",f);
//	f=fopen("data.txt","r+");	//r+ vi can fputs vao nua
//	fseek(f,11,SEEK_CUR);
//	fputs("Z",f);
//	fclose(f);
////
//////	FILE *pFile;
//////	pFile = fopen("data.txt", "wb");  // it works 🤡 
//////	fputs("Tran Tuong Vy", pFile);
//////	fseek(pFile, 11, SEEK_SET);
//////	fputs("Z", pFile); // This is a sample.
//////	fclose(pFile);
//}

// ftell - tra con tro ve vi tri hien tai  	// ???
//int main(){
//	FILE *f;
//	f=fopen("data.bin","rb");  // .txt goes with ()binary ?  //chu_y extension :()
////	char gf[]="PhanTuMy10.0";
////	fputs(gf,f);
//	if(f==NULL){
//		printf("errors ;-; pls do it again!");
//		exit(1);
//	}
//	fseek(f,5,SEEK_END);  //wtf? pos cua SEEK_ ? 😕 
////	ftell(f);
//	
//	fclose(f);
//}

// rewind - tra con tro ve dau file (~SEEK_SET)
//int main(){
//	FILE *f;
//	f=fopen("data.bin","ab");
//	fputs("\nCoMy_cutie",f);
//	rewind(f);
//	fclose(f);
//}

// fgets - doc chuoi tu file (in ra console)
//int main(){
//	FILE *f;
//	f=fopen("data.txt","r");
//	char str[256];
//	if(f==NULL){
//		//printf("fgets error: %s \n", strerror(errno)); // strerror?
//		perror("Chua tao file kia cau oi!");
//	}
//	if(fgets(str,sizeof(str),f)!=NULL){
//		puts(str);
//	}else{
//		perror("Error");
//	}
//	fclose(f);
//}

// fputs - luu van ban vao file.txt
//int main(){
//	FILE *pFile;
//	pFile = fopen("data.txt","r");
//	if(pFile != NULL){
//	        fputs("Nguyen Van A", pFile);
//			
//			fclose(pFile);
//	        return EXIT_SUCCESS;
//	}
//	return EXIT_FAILURE;
//}

// fputc - ghi 1 ky tu vao file
//int main(){
//	FILE *f;
//	f=fopen("data.bin","wb");
//	char c;
//	if(f==NULL){
//		perror("Error operating file!");
//	}else{
//		for(c='A';c<='Z';c++){
//			fputc(c,f);
//			fputc(' ',f);
//		}
//	}
//	fclose(f);
//}

// fscanf - doc noi dung tu file		// file.txt
//int main(){
//	char str[50]; int num;
//	FILE *f;
//	f=fopen("data2.txt","r");
//	fscanf(f,"%s",&str);
//	fscanf(f,"%d",&num);
//	printf("My data has: %s & %d",str,num);
//	fclose(f);
//	return 0;
//}

// fprintf - ghi noi dung vao file		// file.txt
//int main(){
//	FILE *f;
//	f=fopen("data2.txt","a");
//	char name[45];
//	fgets(name,sizeof(name),stdin);
//	fprintf(f,"\nMy name is %s",name);
//	fclose(f);
//	return 0;
//}

// fflush - day het(tuon het) nhung ky tu trong buffer ra stream (ko tinh la r hay w :})
int main(){
//	char buffer[100];
//	FILE *f;
//	f=fopen("data2.bin","rb+");
//	if(f==NULL){
//		perror("Error operating file");
//	}else{
//		fputs("Iloveyousomuch",f);
//		fflush(f);
//		fgets(buffer,sizeof(buffer),f);
//		puts(buffer);
//		fclose(f);
//	}

	char buffer[80];
	FILE * f;
	f = fopen("data2.bin","rb+");
	if(f == NULL){
	        perror ("Error opening file");
	}else{
			//fseek(f,1,SEEK_END);
	        //fputs("\nAlex Vause", f);
	        //rewind(f);
	        ftell(f);
	        fflush(f);	// tuon cac ky tu tu sau pointer cur
	        fgets(buffer, 80, f);
	        puts(buffer);
	        fclose(f);
	}
//	fflush(stderr);
//	fflush(stdin);
//	fflush(stdout);
}
