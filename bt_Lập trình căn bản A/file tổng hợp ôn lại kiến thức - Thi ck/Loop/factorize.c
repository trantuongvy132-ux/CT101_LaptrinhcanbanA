#include <stdio.h>
void factorize(int n){
    int i=2;
    printf("%d = ",n);
    while(n!=1){				//ag:(
        if(n%i==0 && n==i){
            printf("%d",i);
        }else if(n%i==0){
            printf("%d x",i);
            n/=i;
        }else{
            i++;
        }
    }
}

//void factorize(int n){
//    int i;
//    printf("%d = ",n);
//    for(i=2;i<=n;i++){
//        if(n%i==0 && n!=i){
//            printf("%d x ",i);
//            n/=i;
//            i--;
//        }else if(n%i==0 && n==i){
//            printf("%d",i);
//        }
//    }
//}
int main(){
	factorize(100);
}
