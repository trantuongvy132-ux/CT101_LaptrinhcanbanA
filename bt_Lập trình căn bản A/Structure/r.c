#include <stdio.h>
#include <stdlib.h> // Th�m thu vi?n n�y d? s? d?ng h�m malloc v� free
#include <string.h>
typedef struct{
	char *HoTen;
	float LT, TH;
	char *DiemChu;
} SinhVien;
void nhapDS(SinhVien *L, int n){
	int i;
	// S? d?ng v�ng l?p d? nh?p th�ng tin cho t?ng sinh vi�n
	for(i = 0; i < n; i++){
		// C?p ph�t b? nh? cho bi?n HoTen
		L[i].HoTen = (char *)malloc(50 * sizeof(char));
		// S? d?ng fgets d? nh?p chu?i t? b�n ph�m
		fgets(L[i].HoTen, 50, stdin);
		// X? l� k� t? newline trong chu?i
		L[i].HoTen[strcspn(L[i].HoTen,"\n")]='\0';
		// Nh?p di?m LT v� TH
		scanf("%f %f", &L[i].LT, &L[i].TH);
	}
}
char* diemchu(float dt){
	if(dt >= 9.0){
		return "A";
	} else if(dt >= 8.0){
		return "B+";
	} else if(dt >= 7.0){
		return "B";
	} else if(dt >= 6.0){
		return "C+";
	} else if(dt >= 5.0){
		return "C";
	} else if(dt >= 4.5){
		return "D+";
	} else if(dt >= 4.0){
		return "D";
	} else {
		return "F";
	}
}
void inDS(SinhVien *L, int n){
	int i;
	for(i = 0; i < n; i++){
		// T�nh t?ng di?m LT v� TH
		float dt = L[i].LT + L[i].TH;
		// G�n di?m ch? cho m?i sinh vi�n
		L[i].DiemChu = diemchu(dt);
		// In ra th�ng tin c?a t?ng sinh vi�n
		printf("%s %.3f %.3f %s\n", L[i].HoTen, L[i].LT, L[i].TH, L[i].DiemChu);
	}
}

int main(){
	int n, i;
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);
	SinhVien *list = (SinhVien*)malloc(n * sizeof(SinhVien));
	nhapDS(list, n);
	inDS(list, n);
	for(i = 0; i < n; i++){
		free(list[i].HoTen);
	}
	free(list);
	return 0;
}

