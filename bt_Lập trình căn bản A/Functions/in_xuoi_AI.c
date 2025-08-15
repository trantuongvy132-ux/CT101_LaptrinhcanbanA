#include <stdio.h>

void printDigits(int n) {
    if (n / 10 != 0) {
        // G?i d? quy tru?c d? in ch? s? t? trái sang ph?i
        printDigits(n / 10);
    }

    // In ch? s? cu?i cùng
    printf("%d ", n % 10);
}


int main() {
    int number;
    printf("Nh?p s? nguyên: ");
    scanf("%d", &number);

    printf("Các ch? s? c?a s? nguyên %d là: ", number);
    printDigits(number);

    return 0;
}

