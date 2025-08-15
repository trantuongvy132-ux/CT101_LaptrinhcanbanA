#include <stdio.h>
struct DonThuc {
    double he_so;
    int bac;
};
void InDonThuc(struct DonThuc d){
	printf("%.2lfx^%d",d.he_so,d.bac);
}
int main(){
	struct DonThuc d = {1.5, 5};
	InDonThuc(d);
}
