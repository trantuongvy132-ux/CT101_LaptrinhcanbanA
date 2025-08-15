#include <stdio.h>
#include <string.h>
int main() {
    int i,n;
    printf("Nh?p s? lu?ng chu?i: ");
    scanf("%d", &n);
    getchar();

    char list[n][50];
    for (i = 0; i < n; i++) {
        fgets(list[i], sizeof(list[i]), stdin);

        // Lo?i b? ký t? '\n' sau khi d?c chu?i
        size_t len = strlen(list[i]);
        if (len > 0 && list[i][len - 1] == '\n') {
            list[i][len - 1] = '\0';
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, list[i]);
    }
    return 0;
}

