//gcc -o your_program your_program.c -Wno-missing-braces
#include <stdio.h>
typedef struct {
    double he_so;
    int bac;
} DonThuc;
//struct DaThuc{
//	DonThuc A[100];
//	int so_luong;
//};
struct DaThuc{
	DonThuc A[100];
	int so_luong;
}; //static struct DaThuc DaThuc;

int main(){
	//struct DaThuc d = {{{1.5, 5}}, 1};
	struct DaThuc d = {{1.5, 5}, 1};
	printf("Size A = %lu x %lu\n",
	    sizeof(d.A)/sizeof(DonThuc), sizeof(DonThuc));
	printf("n = %d\n", d.so_luong);
}
