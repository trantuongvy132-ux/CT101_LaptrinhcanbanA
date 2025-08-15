#include <stdio.h>
#include <stdlib.h>
struct Point {
    int x, y;
};
int main(){
    int i; scanf("%d",&i);
    FILE *f=fopen("points.bin","rb");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    //
    fseek(f,i*sizeof(struct Point),SEEK_SET);
    struct Point p;
    fread(&p,sizeof(struct Point),1,f);
    printf("(%d, %d)",p.x,p.y);
    fclose(f);
    return 0;
}
