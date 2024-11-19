#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int a;
        scanf("%d", &a);
        int fib1 = 1, fib2 = 1, fibSum = 2;
        while (fibSum < a) {
            fibSum = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibSum;
        }
        if (fibSum == a) {
            printf("YES\n");
        } else  printf("NO\n");
    }
    return 0;
}

