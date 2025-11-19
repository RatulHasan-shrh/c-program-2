
#include <stdio.h>


int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
  
    return 1;

  
}

int main() {
    int n, i;

         printf("Enter a number: ");
         scanf("%d", &n);

         printf("Prime pairs whose sum is %d:\n", n);

    int found = 0;

    
         for (i = 2; i <= n/2; i++) {
         if (isPrime(i) && isPrime(n - i)) {
            printf("%d + %d = %d\n", i, n - i, n);
            found = 1;
        }
    }

          if (!found)
          printf("No two prime numbers sum to %d.\n", n);
 
    return 0;
}
