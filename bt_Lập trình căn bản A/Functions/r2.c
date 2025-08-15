#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double cosin(double x, double epsilon) {
    int n = 0;
    double s = 0.0;
    
    while (fabs(pow(x, 2 * n) / factorial(2 * n)) >= epsilon) {
        s += pow(-1, n) * (pow(x, 2 * n) / factorial(2 * n));
        n++;
    }
    
    return s;
}

int main() {
    const double pi = 3.141592653;
    
    printf("%.10lf\n", cosin(pi / 3, 0.0000000001));
    printf("%.10lf\n", cosin(pi / 2, 0.0000000001));
    printf("%.10lf\n", cosin(0, 0.0000000001));

    return 0;
}
