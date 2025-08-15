#include <stdio.h>
#include <math.h>

double sqrt_newton(double a, double epsilon) {
    double x = 1.0;

    while (fabs(x * x - a) >= epsilon) {
        x = 0.5 * (x + a / x);
    }

    return x;
}

int main() {
    double a, epsilon;
    scanf("%lf %lf", &a, &epsilon);

    double result = sqrt_newton(a, epsilon);
    printf("%.8lf",result);
    return 0;
}

