#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; ++i){
    	if (n % i == 0) return 0;
	}
	return 1;
}


int findPrimeOrder(int a) {
    int count = 0; 
    int num = 2;    

    while (num <= a) {
        if (isPrime(num)) {
            count++;
            if (num == a)
                return count;
        }
        num++;
    }

    return -1; 
}

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int a;
        scanf("%d", &a);
        if (isPrime(a))
            printf("YES %d\n", findPrimeOrder(a));
        else
            printf("NO\n");
    }

    return 0;
}

