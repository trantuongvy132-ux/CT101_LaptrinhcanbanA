#include <stdio.h>
	int main() {
	char fileName[11]; // Để chứa tên file dài tối đa 10 ký tự
	scanf("%s", fileName);
	FILE *file = fopen(fileName, "r");
	
	if (file == NULL) {
	printf("Khong the mo file.\n");
	return 1; // Trả về 1 để thông báo lỗi
	}
	
	int count = 0; // Biến đếm số dòng
	// Đọc từng dòng từ tệp và tăng biến đếm khi đọc một dòng mới
	char buffer[101]; // Để chứa mỗi dòng, có độ dài tối đa là 100 ký tự và ký tự k
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
	count++;
	}
	
	fclose(file);
	printf("%d\n", count);
	return 0;
}
