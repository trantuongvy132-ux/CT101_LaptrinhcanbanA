#include <stdio.h>
int nam_nhuan(int y){
	if((y%4==0&&y%100!=0)||y%400==0){
		return 1;
	}else{
		return 0;
	}
}
int ngay(int m,int y){
	if(m==2){
		if(nam_nhuan(y)==1){
			return 29;
		}else{
			return 28;
		}
	}else if(m==4||m==6||m==9||m==11){
		return 30;
	}else{
		return 31;
	}
}
int main(){
	int d,m,y; scanf("%d %d %d",&d,&m,&y);
	int k=d; m--;
	while(m>0){
		k+=ngay(m,y);
		m--;
	}
	printf("%d",k);
	return 0;
}
