#include <stdio.h>
#include <math.h>
long long giaithua(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*giaithua(n-1);
	}
}
//tinh den khi gia tri cua n khong thoa man, tuc la tai s(n) ko thoa man thi van cong tiep gia tri s do
double cosin(double x,double epsilon){
	int n=0;
	double s=1.0;
	while((pow(x,2*n)/giaithua(2*n))>epsilon){
		n++;
		s+=pow(-1,n)*pow(x,2*n)/giaithua(2*n);
	}
	return s;
}

//double cosin(double x, double epsilon) {
//    int n = 0;
//    double term = 1.0;
//    double s = term;
//    while (fabs(term) > epsilon) {
//        n++;
//        //term *= -x * x / ((2 * n - 1) * (2 * n));
//        term=pow(-1,n)*pow(x,2*n)/giaithua(2*n);
//		s += term;
//    }
//    return s;
//}

int main(){
	const double pi=3.141592653;
	printf("%.10lf\n",cosin(pi/3,0.0000000001));

	printf("%.10lf\n",cosin(pi/2,0.0000000001));
	
	printf("%.10lf\n",cosin(0,0.0000000001));
	
	return 0;
}
