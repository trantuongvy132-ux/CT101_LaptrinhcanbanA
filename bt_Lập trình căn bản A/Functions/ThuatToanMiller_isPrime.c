#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// H�m ph�n t�ch th�nh d?ng 2s X d
   void factor(int n) {
       float s = 0;
       while (n % 2 == 0) {
           s++;
           n = n /2;
       }
       float d = n / s;
   }
   // H�m t�nh ad mod N. Tham kh?o t�nh (a^b) mod c b?ng thu?t to�n chia d? tr?
   int power( int a, int b, int c){
       int ans = 1,i;
       for (i = 1; i <= b; i++){
           ans = ans * a;
           ans = ans % c;
       }
       return ans;
   }


   // H�m ki?m tra xem N?u ad  ? 1 (mod N) v� (ad)2^r  ? -1 (mod n) v?i m?i r t? 0 d?n s - 1 th� N kh�ng ph?i l� s? nguy�n t? . Tr? v? false n?u kh�ng ph?i s? nguy�n t?.
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

  // Ki?m tra n v?i c�c a kh�c nhau. True n?u n l� s? nguy�n t?, false n?u n l� h?p s?.
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
        printf("%lld l� s? nguy�n t?.\n", num);
    } else {
        printf("%lld kh�ng ph?i l� s? nguy�n t?.\n", num);
    }

    return 0;
}
