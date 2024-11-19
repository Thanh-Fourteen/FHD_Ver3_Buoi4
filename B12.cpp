#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isSpecial(int n) {
    return isPrime(n) && digitSum(n) % 5 == 0;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int L, R;
        scanf("%d %d", &L, &R);

        int count = 0;
        for (int i = L; i <= R; ++i) {
            if (isSpecial(i)) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

