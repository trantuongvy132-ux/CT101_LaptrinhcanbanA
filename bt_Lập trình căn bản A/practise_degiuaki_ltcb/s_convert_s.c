#include <stdio.h>
void convert_s(d,h,m,s){
	int seconds=d*86400+h*3600+m*60+s*1;
	printf("%d",seconds);
}
void s_convert(seconds){
	int d,h,m,s;
	d=seconds/86400;
	h=(seconds%86400)/3600;
	m=((seconds%86400)%3600)/60;
	s=(seconds%86400%3600)%60;
	printf("%d ngay %d gio %d phut %d giay",d,h,m,s);
}
int main(){
	// nhap ngay, gio, phut, giay -> giay
	int d,h,m,s; scanf("%d %d %d %d",&d,&h,&m,&s);
	convert_s(d,h,m,s);

	// nhap giay -> ngay, gio, phut, giay
	int seconds; scanf("%d",&seconds);
	s_convert(seconds);
	
	return 0;
}
	
