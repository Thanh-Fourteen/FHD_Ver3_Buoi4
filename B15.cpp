#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long a = n - 1;
    while (!isPrime(a)) a--;

    long long b = n + 1;
    while (!isPrime(b)) b++;
    
    long long count_a = k / a;
    long long count_b = k / b;
    long long count_both = k / (a * b);

    long long result = count_a + count_b - count_both;

    printf("%lld\n", result);

    return 0;
}

