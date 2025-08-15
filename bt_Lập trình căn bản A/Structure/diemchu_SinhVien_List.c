#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc & free
typedef struct{
	char *HoTen;
	float LT, TH;
	char *DiemChu;
}SinhVien;

void nhapDS(SinhVien *L, int n){
	int i;
	for(i=0;i<n;i++){
		fgets(L[i]->HoTen,sizeof(L[i]->HoTen),stdin);
		L[i]->HoTen[strcspn(L[i]->HoTen,"\n")]='\0';
		scanf("%f %f",&L[i]->LT,&L[i]->TH);
	}
}

char diemchu(SinhVien *a,int n){
	float dt=a->LT+a->TH;
	if(dt>=9.0){
		return "A";
	}else if(dt>=8.0){
		return "B+";
	}else if(dt>=7.0){
		return "B";
	}else if(dt>=6.0){
		return "C+";
	}else if(dt>=5.0){
		return "C";
	}else if(dt>=4.5){
		return "D+";
	}else if(dt>=4.0){
		return "D";
	}else{
		return "F";
	}
}

void inDS(SinhVien *L,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%s %.3f %.3f %s",L->HoTen,L->LT,L->TH,diemchu(L,n));
	}
}
int main(){
	int n;
	SinhVien *list;
	scanf("%d ",&n);
	nhapDS(&list,n);
	inDS(list,n);
	free(list);
}
