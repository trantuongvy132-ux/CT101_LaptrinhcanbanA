#include <stdio.h>

void printDigits(int n) {
    if (n / 10 != 0) {
        // G?i d? quy tru?c d? in ch? s? t? tr�i sang ph?i
        printDigits(n / 10);
    }

    // In ch? s? cu?i c�ng
    printf("%d ", n % 10);
}


int main() {
    int number;
    printf("Nh?p s? nguy�n: ");
    scanf("%d", &number);

    printf("C�c ch? s? c?a s? nguy�n %d l�: ", number);
    printDigits(number);

    return 0;
}

