#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isSmith(int n) {
    int sum_prime_factors = 0;
    int temp = n;
    
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            sum_prime_factors += sumOfDigits(i);
            n /= i;
        }
    }
    if (n > 1)
        sum_prime_factors += sumOfDigits(n);
    
    return sumOfDigits(temp) == sum_prime_factors;
}

int main() {
    int N;
    scanf("%d", &N);

    int current = N + 1;
    while (true) {
        if (!isPrime(current) && isSmith(current)) {
            printf("%d", current);
            break;
        }
        current++;
    }

    return 0;
}

