#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char *HoTen;
	float LT, TH;
	char *DiemChu;
}SinhVien;
char *diemchu(float dt){
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
//nhap Danh sach :>
void nhapSV(SinhVien *L){
	L->HoTen=(char*)malloc(100*sizeof(char));
	fgets(L->HoTen,100,stdin); // sizeof(L->HoTen) la size cua char*=8 (nhan 7 ky tu + '\0')
	L->HoTen[strcspn(L->HoTen,"\n")]='\0';
	scanf("%f %f",&(L->LT),&(L->TH)); getchar();
	
	L->DiemChu=diemchu(L->LT+L->TH);
}
void nhapDS(SinhVien **L,int n){
	int i;
	*L=(SinhVien*)malloc(n*sizeof(SinhVien));
	for(i=0;i<n;i++){
		nhapSV(&(*L)[i]);
	}
}
// in Danh sach ;>
void inSV(SinhVien L){
	printf("%s %.3f %.3f %s\n",L.HoTen,L.LT,L.TH,L.DiemChu);
}
void inDS(SinhVien *L,int n){
	int i;
	for(i=0;i<n;i++){
		inSV(L[i]);
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
