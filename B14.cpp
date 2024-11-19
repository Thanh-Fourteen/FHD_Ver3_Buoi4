#include <stdio.h>
#include <math.h>

int isSquareNumber(long long n) {
    long long sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n && n > 1);
}

long long checkDivisor(long long n) {
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0 && (isSquareNumber(i) || isSquareNumber(n / i))) {
            return 0;
        } 
    }
    return 1;
}

long long largestNonSquareDivisor(long long n) {
    long long largestDivisor = -1;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (checkDivisor(i)) {
                largestDivisor = i;
            } 
            if (checkDivisor(n / i)) {
                largestDivisor = n / i;
                break;
            } 
        }
    }
    return largestDivisor;
}

int main() {
    long long n;
    scanf("%lld", &n);
		
    long long result = largestNonSquareDivisor(n);

    if (result == -1 || n == 1) {
        printf("-1");
    } else {
        printf("%lld", result);
    }

    return 0;
}

