#include <stdio.h>
#include <limits.h>
float tinhGiadien(int sc,int sm){
    float bacgia[][2]={
        {50,1549},
        {100,1600},
        {200,1858},
        {300,2340},
        {400,2615},
        {INT_MAX,2701}
    };
    int tt=sm-sc;
    float giatien=0;
    int i;
    
    for(i=0;i<6;i++){
        if(tt>(bacgia[i][0]-bacgia[i-1][0])){
            giatien+=((bacgia[i][0]-bacgia[i-1][0])*bacgia[i][1]);
            tt-=(bacgia[i][0]-bacgia[i-1][0]);
        }else{
            giatien+=(float)tt*bacgia[i][1];
            break;
        }
    }return giatien;
}

int main(){
    int sc,sm;
    scanf("%d %d",&sc,&sm);
    
    printf("%d Kwh: %.f VND",sm-sc,tinhGiadien(sc,sm));
    return 0;
}
