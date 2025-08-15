#include <stdio.h>
#include <string.h>
typedef struct{
    char HoTen[45];
    float lt,th;
}SinhVien;
char *dc(float d){
	if(d>=9.0){
		return "A";
	}else if(d>=8.0){
		return "B+";
	}else if(d>=7.0){
		return "B";
	}else if(d>=6.0){
		return "C+";
	}else if(d>=5.0){
		return "C";
	}else if(d>=4.5){
		return "D+";
	}else if(d>=4.0){
		return "D";
	}else{
		return "F";
	}
}
SinhVien nhapSV(){
    SinhVien a;
    fgets(a.HoTen,sizeof(a.HoTen),stdin);
    a.HoTen[strcspn(a.HoTen,"\n")]='\0';
    scanf("%f %f",&a.lt,&a.th);
    return a;
}
void inSV(SinhVien a){
    printf("%s %.3f %.3f %s",a.HoTen,a.lt,a.th,dc(a.lt+a.th));
}

int main(){
	SinhVien a;
	a = nhapSV();
	inSV(a);
}
