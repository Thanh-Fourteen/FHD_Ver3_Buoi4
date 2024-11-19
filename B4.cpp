#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; ++i){
    	if (n % i == 0) return 0;
	}
	return 1;
}

int findKthPrime(int k) {
    int count = 0;
    int num = 2;

    while (count < k) {
        if (isPrime(num)) {
            count++;
            if (count == k)
                return num;
        }
        num++;
    }

    return -1;
}

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int k;
        scanf("%d", &k);
        printf("%d\n", findKthPrime(k));
    }

    return 0;
}

