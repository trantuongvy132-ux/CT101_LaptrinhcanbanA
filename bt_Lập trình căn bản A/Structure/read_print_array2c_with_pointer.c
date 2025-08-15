#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
    int m, n; scanf("%d", &m); scanf("%d", &n);
    // Cap phat bo nho dung cho mang 2 chieu
    int **arr = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    // Nhap cac phan tu cho mang 2 chieu
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", *(arr + i) + j);
        }
    }
    // In ra cac phan tu cua mang 2 chieu
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    // Giai phong bo nho da cap phat cho mang 2 chieu
    for (i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

