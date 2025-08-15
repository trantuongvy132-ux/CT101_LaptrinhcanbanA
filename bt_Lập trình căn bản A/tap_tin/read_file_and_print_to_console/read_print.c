#include <stdio.h>
#include <stdlib.h>
int main(){
    char file[100]; scanf("%s",file);
    FILE* f=fopen(file,"r");
    char buffer[100];
    while(fgets(buffer,sizeof(buffer),f)!=NULL){
        //puts(buffer);
        printf("%s",buffer);
    }
    
    fclose(f);
    return 0;
}










//int main() {
//	char fileName[11]; // Để chứa tên file dài tối đa 10 ký tự
//	scanf("%s", fileName);
//	FILE *file = fopen(fileName, "r");
//	if (file == NULL) {
//	printf("Khong the mo file.\n");
//	return 1; // Trả về 1 để thông báo lỗi
//	}
//	// Đọc từng dòng từ tệp và in ra màn hình
//	char buffer[101]; // Để chứa mỗi dòng, có độ dài tối đa là 100 ký tự và ký tự k
//	while (fgets(buffer, sizeof(buffer), file) != NULL) {
//	printf("%s", buffer);
//	}
//	fclose(file);
//	return 0;
//}
