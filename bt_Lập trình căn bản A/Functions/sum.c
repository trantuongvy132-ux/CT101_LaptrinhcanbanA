#include <stdio.h>
int Add(int a, int b) {
    return a + b;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n",Add(a, b));
    return 0;
}
