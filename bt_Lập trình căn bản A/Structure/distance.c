#include <stdio.h>
#include <math.h>
struct Point{
   double X,Y;
};
float distance(struct Point A, struct Point B){
    return sqrt(pow((A.X)-(B.X),2)+pow((A.Y)-(B.Y),2));
}
int main(){
//	struct Point A={1,2};
//	struct Point B={3,4};
//	printf("%.4f",distance(A,B));
	struct Point A={1,10};
	struct Point B={3,4};
		
	printf("%.4f",distance(A,B));

}
