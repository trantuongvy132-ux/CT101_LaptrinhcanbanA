#include <stdio.h>
int main(){
    int sc,sm,tt,t;
    scanf("%d %d",&sc,&sm);
    tt=sm-sc;
    
    if(tt<=50){
        t=1549*tt;
    }else if(51<=tt&&tt<=100){
        t=77450+(tt-50)*1600;
    }else if(101<=tt&&tt<=200){
        t=77450+80000+(tt-100)*1858;
    }else if(201<=tt&&tt<=300){
        t=77450+80000+185800+(tt-200)*2340;
    }else if(301<=tt&&tt<=400){
        t=77450+80000+185800+234000+(tt-300)*2615;
    }else{
        t=77450+80000+185800+234000+261500+(tt-400)*2701;
    }
    printf("%d Kwh: %d VND",tt,t);
    return 0;
}
