#include <stdio.h>

int main() {
    long long n = 612852475143;
    long long i = 2;

    while (i * i <= n) {
        if (n % i) {
            i++;
        } else {
            n /= i;
        }
    }

    printf("%lld\n", n);
    return 0;
}

