#include <stdio.h>

long long Sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long PrimeFactor(long long n) {
    if (n == 1) return n;
    long long factor = 0;
    for (long long i = 2; i <= n; i++) {
        if (n % i == 0) factor += Sum(i);
        while (n % i == 0) {
            n /= i;
        }
    }
    return factor;
}

int checkHoax(long long n) {
    if (PrimeFactor(n) == Sum(n)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    if (checkHoax(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

