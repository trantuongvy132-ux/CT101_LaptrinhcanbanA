#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// Hàm phân tích thành d?ng 2s X d
   void factor(int n) {
       float s = 0;
       while (n % 2 == 0) {
           s++;
           n = n /2;
       }
       float d = n / s;
   }
   // Hàm tính ad mod N. Tham kh?o tính (a^b) mod c b?ng thu?t toán chia d? tr?
   int power( int a, int b, int c){
       int ans = 1,i;
       for (i = 1; i <= b; i++){
           ans = ans * a;
           ans = ans % c;
       }
       return ans;
   }


   // Hàm ki?m tra xem N?u ad  ? 1 (mod N) và (ad)2^r  ? -1 (mod n) v?i m?i r t? 0 d?n s - 1 thì N không ph?i là s? nguyên t? . Tr? v? false n?u không ph?i s? nguyên t?.
   bool check( int s, int d, int n, int a) {
      if (n == a) return true;
      int p = power(a, d, n);
      if (p == 1) return true;
      while (s--){
          if (p == n - 1) return true;
          p = p * p % n;
      }
      return false;
   }

  // Ki?m tra n v?i các a khác nhau. True n?u n là s? nguyên t?, false n?u n là h?p s?.
   bool isPrime(long long int N) {
       if (N < 2) return false;
       if (N == 2) return true;
       int s, d;
       factor(N - 1);
       return check(s, d, N, 2) && check(s, d, N, 7) && check(s, d, N, 61);
   }

int main() {
    long long int num;
    printf("Nh?p m?t s?: ");
    scanf("%lld", &num);

    if (isPrime(num)) {
        printf("%lld là s? nguyên t?.\n", num);
    } else {
        printf("%lld không ph?i là s? nguyên t?.\n", num);
    }

    return 0;
}
