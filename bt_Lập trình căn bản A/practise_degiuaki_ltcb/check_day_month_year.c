#include <stdio.h>
int nam_nhuan(y){
	if((y%4==0&&y%100!=0)||y%400==0){
		return 1;
	}else{
		return 0;
	}
}
int check(int d,int m,int y){
	if(1<=d && d<=31 && 1<=m && m<=12){
		if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<=31)){
			return 1;
		}else if((m==4||m==6||m==9||m==11)&&(d<=30)){
			return 1;
		}else{
			if(nam_nhuan(y)==1 && d<=29){
				return 1;
			}else if(nam_nhuan(y)==0 && d<=28){
				return 1;
			}
		}
	}
	return 0;
}
int main(){
	int d,m,y; scanf("%d %d %d",&d,&m,&y);
	if(check(d,m,y)==1){
		printf("ngay thang nam hop le");
	}else{
		printf("KO HOP LE!!!");
	}
}
	
