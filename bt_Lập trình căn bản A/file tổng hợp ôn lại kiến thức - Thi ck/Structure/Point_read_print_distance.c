#include<stdio.h>
#include<math.h>
struct Point{
	double x,y;
};

void readPoint(struct Point *p){
	scanf("%lf%lf",&(p->x), &(p->y));	
}

void printPoint(struct Point a){
	printf("(%.4lf, %.4lf)\n",a.x,a.y);
}

int main(){
	//Khai báo 2 di?m A, B; nh?p 2 di?m dó t? bàn phím và hi?n th? lên màn hình
    struct Point A,B;
    readPoint(&A); readPoint(&B);
    printPoint(A); printPoint(B);
        //Tính kho?ng cách gi?a 2 di?m và hi?n th? k?t qu? kho?ng cách  
        double d=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
        printf("Distance: %.4lf",d);
	return 0;
}   
