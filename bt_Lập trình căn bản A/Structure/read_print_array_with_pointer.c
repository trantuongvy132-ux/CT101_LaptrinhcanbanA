#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i; scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int)); //cap phat bo nho dong
    for (i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}

//if (arr == NULL) {
//        printf("Không d? b? nh?!");
//        return 1;
//    }
