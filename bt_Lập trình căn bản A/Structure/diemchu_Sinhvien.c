#include <stdio.h>
#include <string.h>
typedef struct{
	char hoten[30];
	float lt,th;
}SinhVien;
SinhVien nhapSV(){
	SinhVien a;
	//scanf("%s %f %f",&a.hoten,&a.lt,&a.th);
	fgets(a.hoten,sizeof(a.hoten),stdin);
	a.hoten[strcspn(a.hoten,"\n")]='\0';
	scanf("%f %f",&a.lt,&a.th);
	return a;
}
char *diemchu(SinhVien a); //tai sao diemchu lai la pointer??
void inSV(SinhVien a){
	printf("%s %.3f %.3f %s",a.hoten,a.lt,a.th,diemchu(a));
}

char *diemchu(SinhVien a){
	float dt=a.lt+a.th;
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

int main(){
   	SinhVien a;
   	a = nhapSV(); // G?i h�m nh?p 1 sinh vi�n
   	inSV(a); // Hi?n th? th�ng tin sinh vi�n l�n m�n h�nh
       return 0;
}
